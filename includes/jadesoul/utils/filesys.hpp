#ifndef FILESYS_HPP_1325514009_53
#define FILESYS_HPP_1325514009_53
/**
 * File: filesys.hpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2012-01-02 22:20:09.534000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"
#include "object.hpp"
#include "str.hpp"
#include "list.hpp"
#include "set.hpp"
#include "tuple.hpp"
#include "dict.hpp"

#if defined(OS_WIN32)
	#define ENDL "\r\n"
	#define SLASH "\\"
#elif defined(OS_LINUX)
	#define ENDL "\n"
	#define SLASH "/"
#elif defined(OS_OSX)
	#define ENDL "\r"
	#define SLASH "/"
#else
	#define ENDL "\n"
	#define SLASH "/"
#endif

class walker {
public:
	inline void operator()(const str& root, const L& dirs, const L& files, const uint depth) {
		str prefix=str("\t")*depth;
		uint l=files.size();
		for_n(i, l) cout<<prefix<<"- "<<files[i]<<endl;
		l=dirs.size();
		for_n(i, l) cout<<prefix<<"+ "<<dirs[i]<<endl;
	}
};

#ifdef OS_WIN32
	class path {
	private:
		str p;
		WIN32_FIND_DATAA* pwfd;
		HANDLE hFind;
		bool updated;
	public:
		inline path(const char* s="."):p(s), pwfd(0), hFind(INVALID_HANDLE_VALUE), updated(false) {}
		inline path(const string& s):p(s), pwfd(0), hFind(INVALID_HANDLE_VALUE), updated(false) {}
		inline path(const str& s):p(s), pwfd(0), hFind(INVALID_HANDLE_VALUE), updated(false) {}
		inline path(const path& r):p(r.p), pwfd(0), hFind(INVALID_HANDLE_VALUE), updated(false) {}
		
		inline path& operator +=(const path& r) { return add(r); }
		inline path operator +(const path& r) const { return clone()+=r; }
		
		inline path& operator +=(str r) { return add(r); }
		inline path operator +(str r) const { return clone()+=r; }
		
		inline path& operator /=(const path& r) { return join(r); }
		inline path operator /(const path& r) const { return clone()/=r; }
		
		inline path& operator /=(str r) { return join(path(r)); }
		inline path operator /(str r) const { return clone()/=r; }
		
		// inline path& operator /=(const char* r) { return join(path(r)); }
		// inline path operator /(const char* r) const { return clone()/=r; }
		
		inline operator str() { return p; }
		
		inline ~path() { free(); }
		
		inline path clone() const { 
			return path(p); 
		}
		inline path& add(const path& r) { 
			updated=false;
			p+=r.p; 
			return *this; 
		}
		inline path& join(const path& r) {
			updated=false;
			const str& q=r.p;
			if (p.size()==0 OR q.size()==0) {
				p+=q;
				return *this;
			}
			char a='\\', b='/';
			char sep=a;
			char x=p[-1], y=q[0];
			if ((x==a OR x==b) AND (y==a OR y==b))  p=p(0, -1)+sep+q(1);
			else if ((x==a OR x==b) AND (y!=a AND y!=b))  p=p(0, -1)+sep+q;
			else if ((x!=a AND x!=b) AND (y==a OR y==b))  p=p+sep+q(1);
			else p=p+sep+q;
			return *this;
		}
		
		inline const string tostr() const { return p.tostr(); }
		inline const char* tocstr() const { return p.tocstr(); }
		
		inline const bool exists() {
			update();
			return find_valid();
		}
		inline const bool isfile() {
			update();
			return find_valid() AND !(pwfd->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY);
		}
		inline const bool isnfile() { return !isfile(); }
		inline const bool isdir() {
			update();
			return find_valid() AND (pwfd->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY);
		}
		inline const bool isndir() { return !isdir(); }
		inline const ulong fsize() {
			update();
			return (pwfd->nFileSizeHigh * (MAXDWORD+1)) + pwfd->nFileSizeLow;
		}
		inline const listushort fctime() {
			update();
			return ftime2list(pwfd->ftCreationTime);
		}
		inline const listushort fmtime() {
			update();
			return ftime2list(pwfd->ftLastWriteTime);
		}
		inline const listushort fatime() {
			update();
			return ftime2list(pwfd->ftLastAccessTime);
		}
		inline L files(const str& pattern="*.*") {
			str old=p;
			if (NOT isdir()) p=dirname();
			join(pattern);
			updated=false;
			update();
			L fns;
			if (find_valid()) {
				do {
					if (!(pwfd->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
						const char* fname=(const char*)pwfd->cFileName;
						fns.append(fname);
					}
				}
				while (FindNextFileA(hFind, pwfd));
			}
			p=old;
			updated=false;
			return fns;
		}
		inline L dirs(const str& pattern="*.*") {
			str old=p;
			if (NOT isdir()) p=dirname();
			join(pattern);
			updated=false;
			update();
			L fns;
			if (find_valid()) {
				do {
					if (pwfd->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
						const char* fname=(const char*)pwfd->cFileName;
						if (strcmp(fname, "." )!=0 AND strcmp(fname, ".." )!=0) fns.append(fname);
					}
				}
				while (FindNextFileA(hFind, pwfd));
			}
			p=old;
			updated=false;
			return fns;
		}
		inline L items(const str& pattern="*.*") {
			str old=p;
			if (NOT isdir()) p=dirname();
			join(pattern);
			updated=false;
			update();
			L fns;
			if (find_valid()) {
				do {
					const char* fname=(const char*)pwfd->cFileName;
					if (pwfd->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
						if (strcmp(fname, "." )!=0 AND strcmp(fname, ".." )!=0) fns.append(fname);
					} else {
						fns.append(fname);
					}
				}
				while (FindNextFileA(hFind, pwfd));
			}
			p=old;
			updated=false;
			return fns;
		}
		inline L split() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=max(a, b);
			str dp, fn, name, ext;
			if (c==-1) {
				dp=".";
				fn=p;
			} else {
				dp=p(0, c);
				fn=p(c+1);
			}
			c=fn.rfind(".");
			if (c==-1) {
				name=fn;
				ext="";
			} else {
				name=fn(0, c);
				ext=fn(c);
			}
			return L(p, dp, fn, name, ext);
		}
		inline L splitdir() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=max(a, b);
			L rets;
			if (c==-1) {
				rets.append(".");
				rets.append(p);
			} else {
				rets.append(p(0, c));
				rets.append(p(c+1));
			}
			return rets;
		}
		inline L splitext() const {
			int c=p.rfind(".");
			L rets;
			if (c==-1) {
				rets.append(p);
				rets.append("");
			} else {
				rets.append(p(0, c));
				rets.append(p(c));
			}
			return rets;
		}
		inline str dirname() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=max(a, b);
			return (c==-1)?".":p(0, c);
		}
		inline str extension() const {
			str fn=filename();
			int a=fn.rfind(".");
			return (a==-1)?"":fn(a);
		}
		inline str filename() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=max(a, b);
			return (c==-1)?p:p(c+1);
		}
		
		template<class walker>
		void walk(walker& w) {
			travel(w);
		}
		
		void walk() {
			travel(walker());
		}
	private:
		template<class walker>
		void travel(walker& w, uint d=0) {
			L files=this->files();
			L dirs=this->dirs();
			w(p, dirs, files, d);
			uint l=dirs.size();
			for_n(i, l) clone().join(dirs[i]).travel(w, d+1);
		}
		inline const listushort ftime2list(FILETIME& ftime) {
			TIME_ZONE_INFORMATION zoneinfo;
			GetTimeZoneInformation(&zoneinfo);
			SYSTEMTIME greenwichsystime, localtime;
			FileTimeToSystemTime(&ftime, &greenwichsystime);
			SystemTimeToTzSpecificLocalTime(&zoneinfo, &greenwichsystime, &localtime);
			ushort& year=localtime.wYear, &month=localtime.wMonth, &day=localtime.wDay, 
				&hour=localtime.wHour, &min=localtime.wMinute, &sec=localtime.wSecond,
				&msec=localtime.wMilliseconds;
			return listushort(year, month, day, hour, min, sec, msec);
		}
		inline const bool valid(HANDLE& h) { return h!=INVALID_HANDLE_VALUE; }
		inline const bool find_valid() { return valid(hFind); }
		inline void free() {
			if (find_valid()) FindClose(hFind);
			if (pwfd) delete pwfd;
		}
		inline void update() {
			if (!updated) {
				free();
				pwfd=new WIN32_FIND_DATAA;
				assert(pwfd);
				hFind=FindFirstFileA(tocstr(), pwfd);
			}
			updated=true;
		}
	};
#else
	class path {
	private:
		str p;

	public:
		inline path(const str& s="."):p(s) {}
		
		inline path& operator +=(const path& r) { return add(r); }
		inline path operator +(const path& r) const { return clone()+=r; }
		
		// inline path& operator +=(const str& r) { return add(r); }
		// inline path operator +(const str& r) const { return clone()+=r; }
		
		inline path& operator /=(const path& r) { return join(r); }
		inline path operator /(const path& r) const { return clone()/=r; }
		
		// inline path& operator /=(const str& r) { return join(path(r)); }
		// inline path operator /(const str& r) const { return clone()/=r; }
		
		inline path clone() const { return path(p); }
		inline path& add(const path& r) { p+=r.p; return *this; }
		
		inline path& join(const path& r) {
			const str& q=r.p;
			if (p.size()==0 OR q.size()==0) {
				p+=q;
				return *this;
			}
			char a='\\', b='/';
			char sep=b;
			char x=p[-1], y=q[0];
			if ((x==a OR x==b) AND (y==a OR y==b))  p=p(0, -1)+sep+q(1);
			else if ((x==a OR x==b) AND (y!=a AND y!=b))  p=p(0, -1)+sep+q;
			else if ((x!=a AND x!=b) AND (y==a OR y==b))  p=p+sep+q(1);
			else p=p+sep+q;
			return *this;
		}
		
		inline const string tostr() const { return p.tostr(); }
		inline const char* tocstr() const { return p.tocstr(); }
		/* 
		#include   <sys\stat.h> 
		struct   tm   t1,   t2; 
		struct   stat   sb; 
		stat( "C:\\test.txt ",   &sb); 
		t1   =   *localtime(&sb.st_mtime);   //修改时间 
		t2   =   *localtime(&sb.st_ctime);   //创建时间 
		// struct   tm   { 
		      // int   tm_sec;       =Second 
		      // int   tm_min;       =Minute 
		      // int   tm_hour;     =Hour 
		      // int   tm_mday;     =Day 
		      // int   tm_mon;       =Month-1 
		      // int   tm_year;     =Year-1900 
		      // int   tm_wday; 
		      // int   tm_yday; 
		      // int   tm_isdst; 
		// }; 
		*/
		inline const bool exists() const {}
		inline const bool isfile() const {}
		inline const bool isdir() const {}
		inline const ulong fsize() const {}
		inline const uint fmtime() const {}
		inline const uint fatime() const {}
		inline const uint fctime() const {}

		inline L files() const {}
		inline L dirs() const {}
		inline L items() const {}
		
		inline L split() const {}
		inline L splitdir() const {}
		inline L splitext() const {}
		inline str dirname() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=std::max(a, b);
			return (c==-1)?p:p(0, c);
		}
		inline str extension() const {
			str fn=filename();
			int a=fn.rfind(".");
			return (a==-1)?"":fn(a);
		}
		inline str filename() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=std::max(a, b);
			return (c==-1)?p:p(c+1);
		}
	};
#endif

inline const bool exists(const str& p) { return path(p).exists(); }
inline const bool isfile(const str& p) { return path(p).isfile(); }
inline const bool isnfile(const str& p) { return path(p).isnfile(); }
inline const bool isdir(const str& p) { return path(p).isdir(); }
inline const bool isndir(const str& p) { return path(p).isndir(); }
inline str dirname(const str& p) { return path(p).dirname(); }
inline str filename(const str& p) { return path(p).filename(); }
inline str extension(const str& p) { return path(p).extension(); }
inline L splitdir(const str& p) { return path(p).splitdir(); }
inline L splitext(const str& p) { return path(p).splitext(); }
inline L split(const str& p) { return path(p).split(); }
inline L listfiles(const str& p) { return path(p).files(); }
inline L listdirs(const str& p) { return path(p).dirs(); }
inline L listall(const str& p) { return path(p).items(); }

#if defined(OS_WIN32)

// get current work dir
// DWORD GetCurrentDirectory(
// DWORD nBufferLength, // size of directory buffer
// LPTSTR lpBuffer // directory buffer
// );
inline str cwd() {
	char buf[1024];
	return string(buf, buf+GetCurrentDirectory(1024, buf));
}

// copy a file from src to dst
// BOOL CopyFile(LPCTSTR lpExistingFileName,LPCTSTR lpNewFileName,BOOL bFailIfExists );
inline const bool cp(const str& src, const str& dst) {
	return CopyFile(src.tocstr(), dst.tocstr(), 1);
}

// move a file or dir from src to dst
// BOOL MoveFile(
	// LPCTSTR lpExistingFileName, // file name or dir name
	// LPCTSTR lpNewFileName // new file name or dir name
// );
inline const bool mv(const str& src, const str& dst) {
	return MoveFile(src.tocstr(), dst.tocstr());
}

// delete a file
// BOOL DeleteFile(LPCTSTR lpFileName);
inline const bool rm(const str& p) {
	return DeleteFile(p.tocstr());
}

// delete a dir
// BOOL RemoveDirectory(LPCTSTR lpPathName);
// inline const bool rmdir(const str& p) {
inline const bool rd(const str& p) {
	return RemoveDirectory(p.tocstr());
}

// make a dir
// BOOL CreateDirectory(LPCTSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes );
// inline const bool mkdir(const str& p) {
inline const bool md(const str& p) {
	// return mkdir(p.tocstr());
	return CreateDirectory(p.tocstr(), NULL);
}

//make a dir, auto make dirs if parent not exist
// inline const bool mkdirs(const str& p) {
inline const bool mds(const str& p) {
	str parent=dirname(p);
	if (isndir(parent)) mds(parent);
	return md(p);
}

//recursively delete a dir
// inline const bool rmdirs(const str& p) {
inline const bool rds(const str& p) {
	path top(p);
	if (top.isndir()) return false;
	L files=top.files();
	uint l=files.size();
	for_n(i, l) if (!rm(files[i])) return false;
	L dirs=top.dirs();
	l=dirs.size();
	for_n(i, l) if (!rds(top / dirs[i])) return false;
	rd(p);
	return true;
}

#elif defined(OS_LINUX)
#elif defined(OS_OSX)
#endif

class file {
private:
	FILE* fp;
	str fn;
	//modes: rt wt at rb wb ab rt+ wt+ at+ rb+ wb+ ab+
	str m;
	char* buf;
	//forbidden copy and assign
	file(const file& r) {}
	file& operator=(const file& r) { return *this; }
public:
	inline file(const path& filename, const str& mode="rt"):fp(0), fn(filename.tostr()), m(mode), buf(0) {
		fp=fopen(fn.tocstr(), m.tocstr());
		if (fp==NULL) {
			cout<<"Could not open file:"<<fn<<" with mode:"<<m;
			exit(1);
		}
	}
	
	inline const bool notend() const { return !feof(fp); }
	inline file& flush() {
		fflush(fp);
		return *this;
	}
	
	inline str read(uint size=0) {
		assert(opened());
		if (size==0) {
			fseek(fp, 0, SEEK_END);
			size=ftell(fp);
			rewind(fp);
		}
		char* buffer=new char[size];
		if (buffer==NULL) {
			fputs("Memory error: No buffer for read", stderr);
			exit(2);
		}
		string s(buffer, buffer+fread(buffer, 1, size, fp));
		delete buffer;
		return s;
	}
	inline str readline() {
		assert(opened());
		check_buf();
		string ret;
		if (fgets(buf, 64*1024+1, fp)) ret=buf;
		uint l=ret.size();
		if (l>=2 AND ret[l-2]=='\r' AND ret[l-1]=='\n') return str(ret.begin(), ret.end()-2);
		if (l>=1 AND ret[l-1]=='\n') return str(ret.begin(), ret.end()-1);
		return ret;
	}
	inline L readlines() {
		L rets;
		while (notend()) rets.append(readline());
		return rets;
	}
	
	inline file& write(const str& s) {
		assert(opened());
		uint l=s.size();
		if (l==0) return *this;
		fwrite(s.tocstr(), 1, l, fp);
		return *this;
	}
	inline file& writeline(const str& s) {
		write(s);
		fputs(ENDL, fp);
		return *this;
	}
	inline file& writelines(L lst) {
		uint l=lst.size();
		for_n(i, l) writeline(lst[i]);
		return *this;
	}
	
	~file() {
		flush().close();
		delete buf;
	}
private:
	inline const bool opened() const { return fp!=NULL; }
	inline file& close() {
		if (fp) fclose(fp);
		fp=NULL;
		return *this; 
	}
	inline void check_buf() {
		if (!buf) buf=new char[64*1024+1];
	}
};

inline str fread(const path& p, const bool binary=false) {
	FILE* fp;
	uint size;
	char* buf;
	fp=fopen(p.tocstr(), binary?"rb":"rt");
	assert(fp);//File error: Could not open file for read
	fseek(fp, 0, SEEK_END);
	size=ftell(fp);
	if (size==0) {
		fclose(fp);
		return "";
	}
	rewind(fp);
	buf=new char[size];
	assert(buf);//Memory error: Could not allocate buffer for read
	size=fread(buf, 1, size, fp);
	fclose(fp);
	str ret(buf, buf+size);
	delete buf;
	return ret;
}

inline uint fwrite(const str& s, const path& p, const bool append=false, const bool binary=false) {
	FILE* fp;
	uint size=s.size();
	const char* buf=s.tocstr();
	fp=fopen(p.tocstr(), append?(binary?"ab":"at"):(binary?"wb":"wt"));
	assert(fp);//File error: Could not open file for write
	size=fwrite(buf, 1, size, fp);
	fclose(fp);
	return size;
}

#undef ENDL
#undef SLASH

#endif /* FILESYS_HPP_1325514009_53 */


