/**
 * File: 2915.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-13 15:06:20.571000
 * Written In: Peking University, beijing, China
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define debug
#ifdef debug
	#include <cassert>
	#include <jadesoul>
	ifstream in("data.txt");
	#define print(...) cout<<#__VA_ARGS__<<"="<<__VA_ARGS__<<endl;
	// #define print(...)
	#define dbgcode(...) __VA_ARGS__
	#define dbglog(...) log(__VA_ARGS__)
#else
	istream& in=cin;
	#define print(...)
	#define dbgcode(...)
	#define dbglog(...)
#endif

class group {
public:
	char color;
	int cnt;
	group(char color='A', int cnt=0) {
		this->color=color;
		this->cnt=cnt;
	}
	string tostr() {
		ostringstream oss;
		output(oss);
		return oss.str();
	}
	size_t len() const {
		return cnt;
	}
	friend ostream& operator<<(ostream& os, group& g) {
		return g.output(os);
	}
private:
	ostream& output(ostream& os) {
		return os<<color<<cnt;
	}
};

typedef vector<group> groupvector;

inline groupvector operator+(const groupvector& l, const groupvector& r) {
	groupvector tmp(l);
	tmp.insert(tmp.end(), r.begin(), r.end());
	return tmp;
}

inline void extend(groupvector& me, const groupvector& r) {
	if (r.size()==0) return;
	me.insert(me.end(), r.begin(), r.end());
}

class grouplist {
private:
	groupvector groups;
	string hash;
	void update_hash() {
		this->hash=tostr();
	}
public:
	
	grouplist() {
		groups=groupvector();
		update_hash();
	}
	grouplist(const groupvector& gs) {
		groups=gs;
		update_hash();
	}
	const grouplist operator+(const group& g) {
		groupvector tmp(1, g);
		return grouplist(this->groups+tmp);
	}
	const grouplist operator+(const grouplist& r) {
		return grouplist(this->groups+r.groups);
	}
	const grouplist operator+(const groupvector& v) {
		return grouplist(this->groups+v);
	}
	grouplist& operator+=(const group& g) {
		this->groups.push_back(g);
		update_hash();
		return *this;
	}
	grouplist& operator+=(const grouplist& r) {
		extend(this->groups, r.groups);
		update_hash();
		return *this;
	}
	grouplist& operator+=(const groupvector& v) {
		extend(this->groups, v);
		update_hash();
		return *this;
	}
	string tostr() {
		ostringstream oss;
		output(oss);
		return oss.str();
	}
	friend ostream& operator<<(ostream& os, const grouplist& gs) {
		return os<<gs.hash;
	}
	inline size_t len() const {
		return groups.size();
	}
	bool operator<(const grouplist& r) const {
		const grouplist& me=*this;
		return me.len()!=r.len() ? me.len()<r.len() : me.hash<r.hash;
	}
	bool operator<=(const grouplist& r) const {
		const grouplist& me=*this;
		return me.len()!=r.len() ? me.len()<r.len() : me.hash<=r.hash;
	}
	bool operator>(const grouplist& r) const {
		const grouplist& me=*this;
		return me.len()!=r.len() ? me.len()>r.len() : me.hash>r.hash;
	}
	bool operator>=(const grouplist& r) const {
		const grouplist& me=*this;
		return me.len()!=r.len() ? me.len()>r.len() : me.hash>=r.hash;
	}
	bool operator==(const grouplist& r) const {
		const grouplist& me=*this;
		return me.len()!=r.len() ? false : me.hash==r.hash;
	}
	bool operator!=(const grouplist& r) const {
		const grouplist& me=*this;
		return me.len()!=r.len() ? true : me.hash!=r.hash;
	}
	group& operator[](int i) {
		size_t l=len();
		dbgcode (
			assert(l!=0);
		)
		if (i<0 || i>l) i=i % (int)l;
		if (i<0) i+=l;
		return groups[i];
	}
	grouplist slice(int i, int j) {
		size_t l=len();
		dbgcode (
			assert(l!=0);
		)
		if (i<0 || i>l) i=i % (int)l;
		if (i<0) i+=l;
		if (j<0 || j>l) j=j % (int)l;
		if (j<0) j+=l;
		return grouplist(groupvector(groups.begin()+i, groups.begin()+j));
	}
	void insert(int i, const group& g) {
		dbgcode (
			size_t l=len();
			assert(i>=0 && i<=l);
		)
		groups.insert(groups.begin()+i, g);
		update_hash();
	}
	void prepend(const group& g) {
		insert(0, g);
	}
	void append(const group& g) {
		insert(len(), g);
	}
	void del(int i) {
		size_t l=len();
		if (l==0) return;
		if (i<0 || i>=l) i=i % (int)l;
		if (i<0) i+=l;
		groups.erase(groups.begin()+i);
	}
private:
	ostream& output(ostream& os) {
		if (groups.size()!=0) {
			os<<groups[0];
			size_t l=groups.size();
			for (int i=1; i<l; ++i) os<<groups[i];//os<<'_'<<groups[i];
		}
		return os;
	}
};

int B(group& g) {
	dbgcode (
		assert(g.cnt>=1);
	)
	return g.cnt==1?2:1;
}

int B2(group& g) {
	dbgcode (
		assert(g.cnt>=2);
	)
	return g.cnt==2?1:0;
}

typedef map<grouplist, int> maptype;

maptype mf;
maptype mg;

inline bool key_in_map(grouplist& gs, maptype& m) {
	return m.count(gs)==1;
}

inline bool key_not_in_map(grouplist& gs, maptype& m) {
	return m.count(gs)==0;
}

int F(grouplist& gs, int layer=0) {
	// print(layer);
	// print(gs);
	// print(endl);
	if (key_in_map(gs, mf)) {
		return mf[gs];
	}
	size_t l=gs.len();
	int r=0;
	if (l==1) {
		group& C=gs[0];
		r=B(C);
	} else if (l==2) {
		group& L=gs[0];
		group& R=gs[1];
		r=B(L)+B(R);
	} else {
		group& L=gs[0];
		group& R=gs[-1];
		if (L.color==R.color) {
			grouplist C=gs.slice(1, -1);
			group tmp(L.color, L.cnt+R.cnt);
			r=B2(tmp)+F(C);
		} else {
			grouplist LC=gs.slice(0, -1);
			grouplist CR=gs.slice(1, l);
			int x=B(L)+F(CR, layer+1);
			int y=F(LC, layer+1)+B(R);
			r=min(x, y);
		}
	}
	// if (key_not_in_map(gs, mf)) 
	// print("result "<<gs<<"="<<r);
	return mf[gs]=r;
}

int G(grouplist& gs, int layer=0) {
	// print(layer);
	// print(gs);
	// print(endl);
	
	if (key_in_map(gs, mg)) {
		return mg[gs];
	}
	size_t l=gs.len();
	int r=0;
	if (l==0) {
		r=0;
	} else if (l<=3) {
		r=F(gs);
	} else {
		//test for any same color
		vector<char> colors;
		colors.reserve((int)l);
		for (int i=0; i<l; ++i) {
			colors.push_back(gs[i].color);
			r+=B(gs[i]);
		}
		sort(colors.begin(), colors.end());
		bool same=false;
		for (int i=0; i<l-1; ++i) {
			if (colors[i]==colors[i+1]) {
				same=true;
				break;
			}
		}
		if (!same) {
			mf[gs]=r;
		} else {
			//test for symmetry
			bool symmetry=false;
			if (l%2==1) {
				int c=0, m=l/2;
				while(c<m && gs[c].color==gs[l-1-c].color) ++c;
				if (c==m) symmetry=true;
			}
			if (symmetry) {
				r=F(gs);
				mf[gs]=r;
			} else {
				r=F(gs);
				size_t n=l;
				for (int radius=1; radius<n; ++radius) {
					for (int p=1; p<n-radius+2; ++p) {
						grouplist C=gs.slice(p-1, p-1+radius);
						if (radius>1 && radius%2==1  && C[0].color!=C[-1].color) continue;
						grouplist L=gs.slice(0, p-1);
						grouplist R=gs.slice(p-1+radius, l);
						
						// print(gs);
						// print(L);
						// print(C);
						// print(R);
						
						while (L.len()>0 && R.len()>0 && L[-1].color==R[0].color && L[-1].cnt+R[0].cnt>=3) {
							L.del(-1);
							R.del(0);
						}
						if (L.len()>0 && R.len()>0 && L[-1].color==R[0].color && L[-1].cnt+R[0].cnt<3) {
							group& g=R[0];
							group tmp=group(g.color, g.cnt);
							tmp.cnt+=L[-1].cnt;
							L.del(-1);
							R.del(0);
							L.append(tmp);
						}
						
						
						grouplist U=L+R;
						
						// print(L);
						// print(R);
						// print(U);
						// print(endl);
						
						int x=F(C)+G(U, layer+1);
						//
						if (x<r) r=x;
					}
				}
		
			}
		
		}
	}
	return mg[gs]=r;
}

void solve(string& s) {
	// print(s);
	grouplist gs;
	size_t l=s.size();
	group g;
	for (int i=0; i<l; ++i) {
		char c=s[i];
		if (g.cnt==0) {
			g.color=c;
			g.cnt=1;
		}
		if (i+1<l) {
			if (s[i+1]==c) {
				g.cnt+=1;
			} else {
				gs.append(g);
				g=group();
			}
		} else {
			gs.append(g);
		}
	}
	// print(gs);
	int r=F(gs);
	if (r>2) r=G(gs);
	cout<<r<<endl;
}


int main () {
	int n;
	while(in>>n) {
		string s;
		in>>s;
		solve(s);
		dbglog("ok");
	}
	
	// print(endl);
	// for (maptype::iterator it=mf.begin(); it!=mf.end(); ++it) {
		// cout<<it->first<<"\t"<<it->second<<endl;
	// }
	// print(endl);
	// for (maptype::iterator it=mg.begin(); it!=mg.end(); ++it) {
		// cout<< it->first <<"\t"<< it->second <<endl;
	// }
	
	return 0;
}

