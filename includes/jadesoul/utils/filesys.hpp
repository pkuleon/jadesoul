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
#include "str.hpp"
#include "list.hpp"
#include "set.hpp"
#include "tuple.hpp"
#include "dict.hpp"

#ifdef OS_WIN32
	class path {
	private:
		str p;
		WIN32_FIND_DATAA* pwfd;
		HANDLE hFind;
		bool updated;
	public:
		path(const str& s="."):p(s), pwfd(0), hFind(INVALID_HANDLE_VALUE), updated(false) {}
		path(const path& r):p(r.p), pwfd(0), hFind(INVALID_HANDLE_VALUE), updated(false) {}
		
		inline path& operator +=(const path& r) { return add(r); }
		inline path operator +(const path& r) const { return clone()+=r; }
		
		inline path& operator +=(str r) { return add(r); }
		inline path operator +(str r) const { return clone()+=r; }
		
		inline path& operator /=(const path& r) { return join(r); }
		inline path operator /(const path& r) const { return clone()/=r; }
		
		inline path& operator /=(str r) { return join(path(r)); }
		inline path operator /(str r) const { return clone()/=r; }
		
		~path() { free(); }
		
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
		inline const bool isdir() {
			update();
			return find_valid() AND (pwfd->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY);
		}
		inline const ulong fsize() {
			update();
			return (pwfd->nFileSizeHigh * (MAXDWORD+1)) + pwfd->nFileSizeLow;
			// ulong size=0;
			// HANDLE handle=CreateFile(tocstr(), FILE_READ_EA, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
			// if (valid(handle)) {
				// size=GetFileSize(handle, NULL);
				// CloseHandle(handle);
			// }
			// return size;
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
		inline liststr listfiles(const str& pattern="*.*") {
			str old=p;
			if (NOT isdir()) p=dirname();
			join(pattern);
			updated=false;
			update();
			liststr fns;
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
		inline liststr listdirs(const str& pattern="*.*") {
			str old=p;
			if (NOT isdir()) p=dirname();
			join(pattern);
			updated=false;
			update();
			liststr fns;
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
		inline liststr listall(const str& pattern="*.*") {
			str old=p;
			if (NOT isdir()) p=dirname();
			join(pattern);
			updated=false;
			update();
			liststr fns;
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
		inline liststr split() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=max(a, b);
			str dp, fn, name, ext;
			if (c==-1) {
				dp="";
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
			return liststr(p, dp, fn, name, ext);
		}
		inline liststr splitdir() const {
			int a=p.rfind("/"), b=p.rfind("\\"), c=max(a, b);
			liststr rets;
			if (c==-1) {
				rets.append("");
				rets.append(p);
			} else {
				rets.append(p(0, c));
				rets.append(p(c+1));
			}
			return rets;
		}
		inline liststr splitext() const {
			int c=p.rfind(".");
			liststr rets;
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
			return (c==-1)?p:p(0, c);
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
		

	private:
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
				hFind=FindFirstFileA(string(tostr()).c_str(), pwfd);
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

		inline liststr listfiles() const {}
		inline liststr listdirs() const {}
		inline liststr listall() const {}
		
		inline liststr split() const {}
		inline liststr splitdir() const {}
		inline liststr splitext() const {}
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

class file {
private:
	ifstream ifs;
	ofstream ofs;
	path p;
	char m;
	file(const file& r):p(0), m(0) {}
	file& operator=(const file& r) { return *this; }
public:
	file(path p, const char m='r'):p(p), m(m) {
		if (m=='r') {
			assert(p.isfile());
			ifs.open(p.tocstr());
		}
		else if (m=='w') ofs.open(p.tocstr());
		else if (m=='a') ofs.open(p.tocstr(), ofstream::app);
		else assert(false);
	}
	
	str read(uint size=0) {
		assert(m=='r');
		if (size==0) size=p.fsize();
		if (size==0) return "";
		char* s=new char[size];
		ifs.read(s, size);
		string ret(s, s+size);
		delete s;
		return ret;
	}
	
	str readline() {
		assert(m=='r');
		uint size=64*1024;
		char* s=new char[size];
		ifs.getline(s, size);
		string ret(s, s+size);
		delete s;
		return ret;
	}
	
	file& write(const str& s) {
		assert(m!='r');
		ofs.write(s.tocstr(), s.size());
		return *this;
	}
	
	file& writeline(const str& s) {
#ifdef OS_WIN32
		str nl="\r\n";
#else
		str nl="\n";
#endif
		write(s);
		write(nl);
	}
	
	~file() {
		if (m=='r') ifs.close();
		else ofs.close();
	}
};



#endif /* FILESYS_HPP_1325514009_53 */
