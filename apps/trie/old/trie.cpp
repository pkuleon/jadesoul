/**
 * File: trie.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-09-14 22:54:16.068000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jade.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


inline int hashfunc(char ch) {
	if (ch>='a')
		return ch-97;
	else
		return ch-65+26;
}

class node {
public:
	node* children[52];
	bool word;
	node() {
		for_n(i, 52) children[i]=NULL;
		word=false;
	}
};

class trie {
public:
	node* root;
	node* p;
	trie() {
		root=new node;
		p=root;
	}
	
	void build(vector<string>& vs) {
		for (vector<string>::iterator it=vs.begin(); it!=vs.end(); ++it) {
			string& s=*it;
			int index=0;
			for (string::iterator it2=s.begin(); it2!=s.end(); ++it2) {
				index=hashfunc(*it2);
				if (p->children[index]) {
					p=p->children[index];
				} else {
					p->children[index]=new node;
					p=p->children[index];
				}
			}
			p->word=true;
			p=root;
		}
	}
	
	bool search(string& keyword) {
		p=root;
		int index=0;
		for (string::iterator it=keyword.begin(); it!=keyword.end(); ++it) {
			index=hashfunc(*it);
			if (p->children[index])
				p=p->children[index];
			else
				return false;
		}
		return p->word;
	}
};

int main () {
	datetime now;
	cout<<now<<endl;
	
	fstream fin("words.txt");
	vector<string> vs;
	string s;
	while (fin>>s) vs.push_back(s);
	fin.close();
	
	trie t;
	t.build(vs);
	
	datetime end1;
	cout<<end1<<endl;
	
	for (vector<string>::iterator it=vs.begin(); it!=vs.end(); ++it) {
		string& s=*it;
		t.search(s);
	}
	
	datetime end2;
	cout<<end2<<endl;
	
}

