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

void travel(path p, int d=0) {
	str prefix=str("\t")*d;
	
	liststr files=p.listfiles("*.txt");
	for_n(i, files.size()) {
		cout<<prefix<<"FILE-"<<i<<"\t"<<files[i]<<endl;
	}
	
	liststr dirs=p.listdirs();
	for_n(i, dirs.size()) {
		cout<<prefix<<"DIR-"<<i<<"\t"<<dirs[i]<<endl;
		travel(p/dirs[i], d+1);
	}
}

jtest(openfile, test2,
	path p("D:/Download/picaqiu.cmd");
	printv(p.tostr());
	printv(p.dirname());
	printv(p.filename());
	printv(p.extension());
	printv(p.exists());
	printv(p.isdir());
	printv(p.isfile());
	
	printv(p.fsize());
	printv(p.fctime());
	printv(p.fmtime());
	printv(p.fatime());
	
	file f(p);
	printv(f.read());
	f.close();
	
	f.open(p, 'w');
	f.write("shit");
	f.close();
)

int main () {
	// travel(path("D:\\eclipse"));
	cout<<"hello, world"<<endl;
}

