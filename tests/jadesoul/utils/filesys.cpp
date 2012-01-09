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

jtest(walker2, test4,
	path p(".");
	time_seed();
	p.walk(mywalker());
	time_gap("time");
	// intotal 1233ms
)

int main () {}


