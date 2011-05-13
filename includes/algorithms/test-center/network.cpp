/*
 * Description: 
 *
 * Copyright (c) 2010 Jadesoul (Home Page: http://jadesoul.org , Blog: http://www.jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * $Date: 2010-10-15 10:39:12.956000$
 */

#include <jadesoul>

struct node {
	string name;
	set<node*> adjacents;
	void connect(node* another) {
		this->adjacents.insert(another);
		another->adjacents.insert(this);
	}
};

node nodes[10];

node* generate_network() {
	node* start=nodes+0;
	for (int i=1; i<10; ++i) {
		node* now=nodes+i;
		start->connect(now);
		if (i%4==0) start=now;
	}
	return start;
}

void travel(node* start) {
	node* now=start;
	do {
		cout<<now->name<<endl;
		if (now->adjacents.size()==0) {
			cout<<"\t没有孩子:"<<endl;
		} else {
			cout<<"\t孩子:"<<endl;
			for (int i=0; i<now->adjacents.size(); ++i) {
				travel( *(now->adjacents.begin() +i));
			}
		}
	} while (now!=start);
}

void test () {
	travel(generate_network());
	cout<<"hello, world"<<endl;
}
