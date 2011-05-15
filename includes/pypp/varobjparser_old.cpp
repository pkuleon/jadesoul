/**
 * File: test.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-05-12 21:56:03.546000
 * Written In: Peking University, beijing, China
 */

#include <jade.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define die cout<<"die @ "<<__FILE__<<" in line:"<<__LINE__<<endl;assert(false);
#define bye(msg) cout<<"bye-bye: "<<#msg<<endl;die;

#define macro(...) cout<<__VA_ARGS__ size()<<endl;


#ifdef debug
	#define showt(tmp) cout<<typeid(tmp).name()<<endl
	#define showp(p) cout<<p<<endl
	#define msg(s) cout<<#s<<endl
	#define dbg(msg) cout<<"creating a new var: "<<#msg<<" : "<<r<<" : "<<this<<endl
	#define codemask(...) __VA_ARGS__
#else
	#define showt(tmp)
	#define showp(p)
	#define msg(s)
	#define dbg(msg)
	#define codemask(...)
#endif

void tabs(int depth) {
	for_n(i, depth-1) cout<<"\t";
}

char opposite(char c) {
	if (c=='(') return ')';
	if (c=='<') return '>';
	if (c=='[') return ']';
	if (c=='{') return '}';
	if (c==')') return '()';
	if (c=='>') return '<';
	if (c==']') return '[';
	if (c=='}') return '{';
	return '#';
}

bool anasys(string s) {
	const char* p=s.c_str();
	size_t length=strlen(p);
	size_t start=0, end=length;
	string now;
	stack<char> stk;
	queue<char> que;
	stk.push('\0');
	char c, t;
	vector<bool> inint(100, false);
	vector<bool> infloat(100, false);
	vector<bool> instr(100, false);
	vector<bool> inlist(100, false);
	vector<bool> intuple(100, false);
	vector<bool> inset(100, false);
	vector<bool> indict(100, false);
	vector<bool> invalue(100, false);
	vector<bool> forcomma(100, false);//comma needed in list, tuple, set
	vector<bool> forcolon(100, false);//colon needed in dict, after key
	int depth=1;
	//in stack \0, { [ ( < S F I
	//
	while((NOT stk.empty()) AND start<=end) {
		c=p[start];
		t=stk.top();
		if (instr[depth] AND c!='"' AND c!='\'') {
			now.push_back(c);
			++start;
			continue;
		
		} else if (c==' ' OR c=='\v' OR c=='\t' OR c=='\r' OR c=='\n') {
			if (infloat[depth]) {//first check float
				tabs(depth); cout<<now<<endl;
				infloat[depth]=false;
				depth-=1;
				now.clear();
				if (depth==1) {//special, skip all after and then finish
					while(NOT stk.empty()) stk.pop();
					return true;
				}
				if (inlist[depth] OR intuple[depth] OR inset[depth]) {
					forcomma[depth]=true;
				} else if (indict[depth]) {
					invalue[depth]=NOT invalue[depth];
					forcolon[depth]=false;
					forcomma[depth]=false;
					if (invalue[depth]) forcolon[depth]=true;
					else forcomma[depth]=true;
				}
				
			} else if (inint[depth]) {
				tabs(depth); cout<<now<<endl;
				inint[depth]=false;
				depth-=1;
				now.clear();
				if (depth==1) {//special, skip all after and then finish
					while(NOT stk.empty()) stk.pop();
					return true;
				}
				if (inlist[depth] OR intuple[depth] OR inset[depth]) {
					forcomma[depth]=true;
				} else if (indict[depth]) {
					invalue[depth]=NOT invalue[depth];
					forcolon[depth]=false;
					forcomma[depth]=false;
					if (invalue[depth]) forcolon[depth]=true;
					else forcomma[depth]=true;
				}
			} else {
				cout<<"skip empty char, pos="<<start<<endl;
			}
		} else if ((inint[depth] OR infloat[depth]) AND ((NOT (c=='.' OR c==',' OR c==':' OR c==')' OR c=='>' OR c==']' OR c=='}' OR c=='\0' OR (c>='0' AND c<='9'))))) {	
			cout<<"should be numbers or dots: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
			return false;
		} else if (forcomma[depth] AND c!=',') {
			if (inlist[depth] AND c!=']') {
				//pass
			} else if (intuple[depth] AND c!=')') {
				//pass
			} else if (inset[depth] AND c!='>') {
				//pass
			} else if (indict[depth] AND c!='}') {
				//pass
			} else {
				cout<<"need a comma or obj end mark: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			}
		} else if (forcolon[depth] AND c!=':') {
			if (inlist[depth] AND c!=']') {
				//pass
			} else if (intuple[depth] AND c!=')') {
				//pass
			} else if (inset[depth] AND c!='>') {
				//pass
			} else if (indict[depth] AND c!='}') {
				//pass
			} else {
				cout<<"need a comma or obj end mark: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			}
		} else if (c=='.') {
			if (depth==1 OR inlist[depth] OR intuple[depth] OR inset[depth] OR indict[depth]) {
				now.push_back(c);
				++depth;
				infloat[depth]=true;
			} else if (inint[depth] AND NOT infloat[depth]) {//change int to a flaot
				now.push_back(c);
				inint[depth]=false;
				infloat[depth]=true;
			} else if (inint[depth] AND infloat[depth]) {//disable int
				now.push_back(c);
				inint[depth]=false;
			} else if (infloat[depth]) {
				cout<<"two many dots: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			}
			
		} else if (c=='-') {
			if (depth==1 OR inlist[depth] OR intuple[depth] OR inset[depth] OR indict[depth]) {
				now.push_back(c);
				++depth;
				inint[depth]=true;
				infloat[depth]=true;
			} else if (infloat[depth]) {
				cout<<"two many '-': "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			} else if (inint[depth]) {//change int to a flaot
				cout<<"two many '-': "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			}
		} else if (c==':') {
			if (indict[depth]) {//value found
				cout<<c;
				assert(invalue[depth]==false);
				invalue[depth]=true;
				forcolon[depth]=false;//init
				forcomma[depth]=false;
			} else {
				if (inint[depth]) {
					tabs(depth); cout<<now;
					inint[depth]=false;
					depth-=1;
					now.clear();
					invalue[depth]=true;
				} else if (infloat[depth]) {
					tabs(depth); cout<<now;
					infloat[depth]=false;
					depth-=1;
					now.clear();
					invalue[depth]=true;
				} else {
					cout<<"should not be this: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
					return false;
				}
				assert(indict[depth]);
				
				assert(invalue[depth]==true);
				
				forcolon[depth]=false;
				forcomma[depth]=false;
				
				cout<<c;
				stk.pop();
				
			}
		} else if (c>='0' AND c<='9') {
			if (depth==1 OR inlist[depth] OR intuple[depth] OR inset[depth] OR indict[depth]) {//a new number
				now.push_back(c);
				++depth;
				inint[depth]=true;
				infloat[depth]=true;
			} else if (infloat[depth] OR inint[depth]) {
				now.push_back(c);
			}
		} else if (c==',') {
			if (inlist[depth] OR intuple[depth] OR inset[depth] OR indict[depth]) {
				cout<<c<<endl; tabs(depth+1);
				forcomma[depth]=false;
				if (indict[depth]) {
					if (invalue[depth]) invalue[depth]=false;
					// else {
						// cout<<"should in value here: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
						// return false;
					// }
				}
			} else if (inint[depth] OR (inint[depth] AND infloat[depth])) {//fisrt hadle int
				tabs(depth); cout<<now<<c<<endl;
				if (invalue[depth]) {//TODO:parse int
				} else {
				}
				infloat[depth]=false;
				inint[depth]=false;
				depth-=1;
				now.clear();
				if (indict[depth]) {
					if (invalue[depth]) invalue[depth]=false;
				}
			} else if (infloat[depth]) {
				tabs(depth); cout<<now<<c<<endl;
				if (invalue[depth]) {//TODO:parse float
				} else {
				}
				infloat[depth]=false;
				depth-=1;
				now.clear();
				if (indict[depth]) {
					if (invalue[depth]) invalue[depth]=false;
				}
			}
		} else if (c=='(') {
			tabs(depth+1); cout<<c<<endl;
			depth+=1;
			intuple[depth]=true;
			stk.push(c);
		} else if (c==')') {
			if (t!='(') {
				cout<<"an '"<<opposite(t)<<"' expected: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			} else {
				tabs(depth); cout<<now<<endl;
				intuple[depth]=false;
				depth-=1;
				tabs(depth); cout<<c<<endl;
				stk.pop();
				now.clear();
			}
		} else if (c=='[') {
			tabs(depth); cout<<c<<endl;
			depth+=1;
			inlist[depth]=true;
			stk.push(c);
		} else if (c==']') {
			if (t!='[') {
				cout<<"an '"<<opposite(t)<<"' expected: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			} else {
				tabs(depth); cout<<now<<endl;
				inlist[depth]=false;
				depth-=1; 
				tabs(depth); cout<<c<<endl;
				stk.pop();
				now.clear();
			}
		} else if (c=='<') {
			tabs(depth); cout<<c<<endl;
			depth+=1;
			inset[depth]=true;
			stk.push(c);
		} else if (c=='>') {
			if (t!='<') {
				cout<<"an '"<<opposite(t)<<"' expected: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			} else {
				tabs(depth); cout<<now<<endl;
				inset[depth]=false;
				depth-=1; 
				tabs(depth); cout<<c<<endl;
				stk.pop();
				now.clear();
			}
		} else if (c=='{') {
			tabs(depth); cout<<c<<endl;
			depth+=1;
			indict[depth]=true;
			stk.push(c);
			invalue[depth]=false;//key needed
		} else if (c=='}') {
			if (t!='{') {
				cout<<"an '"<<opposite(t)<<"' expected: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
				return false;
			} else {
				// if (invalue[depth]==false AND NOT (inlist[depth] OR intuple[depth] OR inset[depth] OR indict[depth])) {
				if (NOT inint[depth] AND NOT infloat[depth]) {
					if (invalue[depth]==false) {
						forcolon[depth]=false;
						forcomma[depth]=false;
					} else {
						cout<<"2the last key need a value: '"<<opposite(t)<<"' expected: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
						return false;
					}
				} else if (inint[depth]) {
					if (NOT forcolon[depth]) tabs(depth); 
					cout<<now<<endl;
					inint[depth]=false;
					depth-=1;
					now.clear();
					invalue[depth]=NOT invalue[depth];
				} else if (infloat[depth]) {
					if (NOT forcolon[depth]) tabs(depth); 
					cout<<now<<endl;
					infloat[depth]=false;
					depth-=1;
					now.clear();
					invalue[depth]=NOT invalue[depth];
				}
				// assert(indict[depth]);
				if (invalue[depth]==false) {
					forcolon[depth]=false;
					forcomma[depth]=false;
				} else {
					cout<<"1the last key need a value: '"<<opposite(t)<<"' expected: "<<c<<" top: "<<t<<" start: "<<start<<" now: "<<now<<endl;
					return false;
				}
				indict[depth]=false;
				tabs(depth); cout<<c<<endl;
				stk.pop();
				now.clear();
			}
		} else if (c=='"' OR c=='\'') {
			if (instr[depth]) {
				if (c==t) {
					stk.pop();
					
					
					instr[depth]=false;
					--depth;
					if (indict[depth]) {
						if (invalue[depth]==true) {
							cout<<"'"<<now<<"'";
							invalue[depth]=false;
							forcomma[depth]=true;
							forcolon[depth]=false;
						} else {
							tabs(depth); cout<<"'"<<now<<"'";
							invalue[depth]=true;
							forcomma[depth]=false;
							forcolon[depth]=true;
						}
					} else {
						tabs(depth); cout<<"'"<<now<<"'";
					}
					
					now.clear();
					if (depth==1) {//special, skip all after and then finish
						while(NOT stk.empty()) stk.pop();
						return true;
					}
				} else {
					now.push_back(c);
				}
			} else {
				stk.push(c);
				++depth;
				instr[depth]=true;
			}
		} else if (c=='\0') {
			if (t==c) {
				cout<<"success!"<<endl;
				tabs(depth); cout<<now<<endl;
				stk.pop();
				--depth;
			} else {
				cout<<"failed!"<<endl;
				return false;
			}
		
		} else {
			now.push_back(c);
		}
		++start;
		// stk.push(p[start++]);
	}
	return stk.empty();
}

int main () {
	cout<<anasys("{1:2,'3':3}")<<endl;
}

