/**
 * File: filesys.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-02 22:20:29.682000
 * Written In: Peking University, beijing, China
 */

#include "jadesoul.hpp"

// jtest(hi, test1,
	// path p("D:\\GreenSoft\\myentunnel.tar.gz");
	// printv(p.tostr());
	// printv(p.dirname());
	// printv(p.filename());
	// printv(p.extension());
	// printv(p.exists());
	// printv(p.isdir());
	// printv(p.isfile());
	
	// printv(p.listdirs());
	// printv(p.listfiles());
// )

// jtest(openfile, test2,
	// path p("D:\\WorkSpace\\2012-1-6\\readme.txt");
	// printv(p.tostr());
	// printv(p.dirname());
	// printv(p.filename());
	// printv(p.extension());
	// printv(p.exists());
	// printv(p.isdir());
	// printv(p.isfile());
	
	// printv(p.fsize());
	// printv(p.fctime());
	// printv(p.fmtime());
	// printv(p.fatime());
	
	// file f(p);
	// printv(f.read());
	// f.close();
	
	// f.open(p, 'w');
	// f.write("shit");
	// f.close();
// )

// jtest(walker1, test3,
	// path p(".");
	// p.walk();
// )

class mywalker {
public:
	void operator()(const str& root, const L& dirs, const L& files, const uint depth) {
		str prefix=str(" ")*depth;
		uint l=files.size();
		for_n(i, l) ;//cout<<prefix<<"-"<<" "<<files[i]<<" "<<path(root).join(files[i]).fsize()<<endl;
		l=dirs.size();
		for_n(i, l) ;//cout<<prefix<<"+"<<" "<<dirs[i]<<endl;
	}
};

// jtest(walker2, test4,
	// path p(".");
	// time_seed();
	// p.walk(mywalker());
	// time_gap("time");
	// intotal 1233ms
// )

str p="E:\\svnprojects-linux\\jadesoul\\tests\\jadesoul\\utils\\compile.log";

// jtest(file_read, test5,
	// file f(p.tocstr());
	// str s=f.read();
	// printv(s);
// )


// jtest(file_readline, test6,
	// file f(p.tocstr());
	// while(f.notend()) {
		// str s=f.readline();
		// printv(s);
	// }
// )

// jtest(file_readlines, test7,
	// file f(p.tocstr());
	// printv(f.readlines());
// )

// jtest(file_write, test8,
	// file f(p.tocstr(), "wt");
	// str s="hi, jadesoul";
	// f.write(s);
	// printv(s);
// )

// jtest(file_writeline, test9,
	// file f(p.tocstr(), "wb");
	// f.write("shit");
// )

// jtest(file_writelines, test10,
	// file f(p.tocstr(), "wt");
	// f.writelines(L("haida", "asaskdj"));
// )

// jtest(fwrite_func, test11,
	// fwrite("shit\nasasd\nasdaks", "compile.txt");
// )

// jtest(fread_func, test12,
	// printv(fread("compile.txt"));
// )

jtest(mkdir_func, test13,
	str p="mkdir_test2";
	if (isndir(p)) md(p);
	// printv(cwd());
	// printv(cwd().repr());
)

int main () {}


