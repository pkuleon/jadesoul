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
 #define debug
#include <jade.hpp>
#ifdef debug
	#define showt(tmp) cout<<typeid(tmp).name()<<endl
	#define showp(p) cout<<p<<endl
	#define msg(s) cout<<#s<<endl
	#define dbg(msg) cout<<"creating a new var: "<<#msg<<" : "<<r<<" : "<<this<<endl
	#define codemask(...) __VA_ARGS__
	#define die cout<<"die @ "<<__FILE__<<" in line:"<<__LINE__<<endl;assert(false);
	#define bye(msg) cout<<"bye-bye: "<<#msg<<endl;die;
	#define macro(...) cout<<__VA_ARGS__ size()<<endl;
#else
	#define showt(tmp)
	#define showp(p)
	#define msg(s)
	#define dbg(msg)
	#define codemask(...)
#endif

string tabs(int depth) {
	string tmp;
	for_n(i, depth-1) tmp+="\t";
	return tmp;
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
	assert(false);
	return ' ';
}

char expect(char c, const char*p) {
	uint l=strlen(p);
	for_tn(uint, i, l) {
		char m=p[i];
		if (m=='n') {
			if (isdigit(c) || c=='-' || c=='.') return m;
		} else if (m=='f') {
			if (isdigit(c) || c=='-' || c=='.') return m;
		} else if (m=='i') {
			if (isdigit(c) || c=='-') return m;
		} else if (m=='s') {//str
			if (c=='"' || c=='\'') return m;
		} else if (m=='S') {//end-of-str
			if (c=='"' || c=='\'') return m;
		} else if (m==',') {
			if (c==',') return m;
		} else if (m==c) {
			return m;
		}
	}
	cout<<"expect: "<<p<<" but get: "<<c<<endl;
	return -1;
}

//move i to the next expected char
// #define move_i_to_next_expected\
// if (nextexp!=0) {\
	// while(i<length && (isspace(p[i]) || iscntrl(p[i]))) ++i;\
	// if (strchr(nextexp, p[i])) { cout<<nextexp<<" expected, but not found"<<endl; return false; }\
	// nextexp=0;\
// }\


bool anasys(const char* p) {
	size_t length=strlen(p);
	size_t start=0, end=length;//end include the last \0
	size_t i, j, k;
	stack<char> stk;
	// queue<char> que;
	stk.push('\0');
	
	// vector<bool> inint(100, false);
	// vector<bool> infloat(100, false);
	// vector<bool> instr(100, false);
	// vector<bool> inlist(100, false);
	// vector<bool> intuple(100, false);
	// vector<bool> inset(100, false);
	// vector<bool> indict(100, false);
	// vector<bool> invalue(100, false);
	// vector<bool> forcomma(100, false);//comma needed in list, tuple, set
	// vector<bool> forcolon(100, false);//colon needed in dict, after key
	int depth=1;
	//in stack \0, { [ ( < S F I
	//
	char c, t;//current char and stack top
	t=stk.top();
	
	string tmp;
	i=start;
	c=p[i];
	j=i;
	char m;
	char *nextexp=0;
	char pos='B';
	//B	-	at the begin of a obj
	//E	-	at the end of a element
	//K	-	at the end of a key, for dict
	bool dictflag[1000];//maxmun layers
	for_n(i, 1000) dictflag[i]=false;
	while(! stk.empty()) {
		if (isspace(c) || iscntrl(c)) {
			if (t!='s' && t!='n') ++i;
		} else if (t=='\0') {
			if (pos=='B') nextexp="{[(<ns";
			if (pos=='E') nextexp="\0";
			m=expect(c, nextexp);
			if (m==-1) return false;
			else if (m=='\0') return true;
			else {
				pos='B';
				if (m!='n' && m!='s') cout<<tabs(stk.size())<<c<<endl;
				stk.push(m);
				if (m!='n') ++i;
			}
		} else if (t=='s') {
			j=i;
			m=p[i-1];
			while(j<length && p[j]!=m) ++j;
			if (j==length) { msg(bad str); return false; }
			if (pos!='V') cout<<tabs(stk.size()-1);
			cout<<(string("'")+string(p+i, p+j)+"'");
			stk.pop();
			i=j+1;
			
			if (stk.top()=='{') {
				if (dictflag[stk.size()]==false) pos='M';
				else pos='E';
			} else pos='E';
		} else if (t=='n') {
			j=i;
			// cout<<"num begin: "<<(p+i)<<endl;
			while(j<length && strchr("-.0123456789", p[j])) ++j;
			tmp=string(p+i, p+j);
			// cout<<"tmp: "<<tmp<<endl;
			const char* s=tmp.c_str();
			if (strchr(s, '.')) {
				if (pos!='V') cout<<tabs(stk.size()-1);
				cout/* <<"float: " */<<atof(s);
			} else {
				if (pos!='V') cout<<tabs(stk.size()-1);
				cout/* <<"int: " */<<atoi(s);
			}
			stk.pop();
			i=j;	
			
			if (stk.top()=='{') {
				// cout<<"d="<<stk.size()<<" c="<<c<<" top="<<stk.top()<<" pos="<<pos<<boolalpha<<" "<<dictflag[stk.size()]<<" i="<<i<<" j="<<j<<endl;
				if (dictflag[stk.size()]==false) pos='M';
				else pos='E';
			} else pos='E';
		} else if (t=='[') {
			if (pos=='B') nextexp="{[(<ns]";
			if (pos=='E') nextexp=",]";
			m=expect(c, nextexp);
			if (m==-1) return false;
			else if (m==']') {
				stk.pop();
				cout<<endl<<tabs(stk.size())<<c;
				pos='E';
				++i;
			} else if (m==',') {
				pos='B';
				cout<<c<<endl;
				++i;
			} else if (m=='{') {
				pos='K';
				stk.push(m);
				cout<<c<<endl;
				++i;
			} else {
				if (m!='n' && m!='s') {
					cout<<tabs(stk.size())<<c<<endl;
					pos='B';
				}
				stk.push(m);
				if (m!='n') ++i;
			}
		} else if (t=='(') {
			if (pos=='B') nextexp="{[(<ns)";
			if (pos=='E') nextexp=",)";
			m=expect(c, nextexp);
			if (m==-1) return false;
			else if (m==')') {
				stk.pop();
				cout<<endl<<tabs(stk.size())<<c;
				pos='E';
				++i;
			} else if (m==',') {
				pos='B';
				cout<<c<<endl;
				++i;
			} else if (m=='{') {
				pos='K';
				stk.push(m);
				cout<<c<<endl;
				++i;
			} else {
				if (m!='n' && m!='s') {
					cout<<tabs(stk.size())<<c<<endl;
					pos='B';
				}
				stk.push(m);
				if (m!='n') ++i;
			}
		} else if (t=='<') {
			if (pos=='B') nextexp="{[(<ns>";
			if (pos=='E') nextexp=",>";
			m=expect(c, nextexp);
			if (m==-1) return false;
			else if (m=='>') {
				stk.pop();
				cout<<endl<<tabs(stk.size())<<c;
				pos='E';
				++i;
			} else if (m==',') {
				pos='B';
				cout<<c<<endl;
				++i;
			} else if (m=='{') {
				pos='K';
				stk.push(m);
				cout<<c<<endl;
				++i;
			} else {
				if (m!='n' && m!='s') {
					cout<<tabs(stk.size())<<c<<endl;
					pos='B';
				}
				stk.push(m);
				if (m!='n') ++i;
			}
		} else if (t=='{') {
			if (pos=='K') nextexp="ns}";//assume the key should obly be numbers and strings
			if (pos=='M') nextexp=":";
			if (pos=='V') nextexp="{[(<ns";//value can be any thing
			if (pos=='E') nextexp=",}";
			m=expect(c, nextexp);
			if (m==-1) return false;
			else if (m=='}') {
				dictflag[stk.size()]=false;
				stk.pop();
				cout<<endl<<tabs(stk.size())<<c;
				pos='E';
				++i;
			} else if (m==',') {
				dictflag[stk.size()]=false;
				pos='K';
				cout<<c<<endl;
				++i;
			} else if (m=='{') {
				pos='K';
				stk.push(m);
				cout<<c<<endl;
				++i;
			} else if (m==':') {
				dictflag[stk.size()]=true;
				pos='V';
				cout<<c;
				++i;
			} else {
				if (m!='n' && m!='s') {
					if (!dictflag[stk.size()]) cout<<tabs(stk.size());
					cout<<c<<endl;
					pos='B';
				}
				stk.push(m);
				if (m!='n') ++i;
			}
		}
		
		t=stk.top();
		if (i==length && t=='\0') return true;
		if (i>length) { msg(i got out of range);return false; }
		c=p[i];
		// cout<<"d="<<stk.size()<<" c="<<c<<" top="<<stk.top()<<" pos="<<pos<<boolalpha<<" "<<dictflag[stk.size()]<<" i="<<i<<" j="<<j<<endl;
	}
	return stk.empty();
}


int main () {
	// cout<<boolalpha<<anasys("[1,2,3,4]")<<endl;
	cout<<boolalpha<<endl<<anasys("{1:(1,2,3,4),3:{'hi':2,'jadesoul':{1:2,3:{-1:     2,3.2:[1,2,'hello'],  5:'asdas' },5:{1:  2,3  :{1:2,3 :4,5  :6},5:6}},5:6},5:6}")<<endl;
}



