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

char expect(char c, const char*p) {
	uint l=strlen(p);
	for_tn(uint, i, l) {
		char m=p[i];
		if (m=='n') {
			if (isdigit(c) || c=='-' || c=='.') return m;
		} else if (m=='s') {//str
			if (c=='"' || c=='\'') return m;
		} else if (m==c) {
			return m;
		}
	}
	return -1;
}

bool anasys(const char* p) {
	size_t length=strlen(p), i=0, j=0;
	stack<char> stk;
	stk.push('\0');
	string tmp;
	char *nextexp=0;//next expectations
	char c=p[i], t, m, pos='B';//current char and stack top and match
	//---------- pos can be ------------
	//B	-	at the begin of a obj
	//E	-	at the end of a element
	//K	-	at the begin of a key, only for dict
	//M	-	at the end of a key, only for dict
	//V	-	at the begin of a value, only for dict
	bitset<1000> dictflag;//maxmun layers
	for_n(i, 1000) dictflag[i]=false;
	while(! stk.empty()) {
		t=stk.top();
		if (i==length && t=='\0') { stk.pop(); break; }
		if (i>length) { msg(i got out of range);break; }
		c=p[i];
		if (isspace(c) || iscntrl(c)) {
			if (t!='s' && t!='n') ++i;
			continue;
		} else if (t=='\0') {
			if (pos=='B') nextexp="{[(<ns";
			if (pos=='E') nextexp="\0";
			m=expect(c, nextexp);
			if (m==-1) break;
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
			if (j==length) { msg(bad str); break; }
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
			while(j<length && strchr("-.0123456789", p[j])) ++j;
			tmp=string(p+i, p+j);
			const char* s=tmp.c_str();
			if (strchr(s, '.')) {
				if (pos!='V') cout<<tabs(stk.size()-1);
				cout<<atof(s);
			} else {
				if (pos!='V') cout<<tabs(stk.size()-1);
				cout<<atoi(s);
			}
			stk.pop();
			i=j;
			if (stk.top()=='{') {
				if (dictflag[stk.size()]==false) pos='M';
				else pos='E';
			} else pos='E';
		} else if (t=='[') {
			if (pos=='B') nextexp="{[(<ns]";
			if (pos=='E') nextexp=",]";
			m=expect(c, nextexp);
			if (m==-1) break;
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
			if (m==-1) break;
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
			if (m==-1) break;
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
			if (m==-1) break;
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
	}
	if (m==-1) cout<<"expect '"<<(nextexp[0]?nextexp:"\\0")<<"' for 0x"<<hex<<int(t)<<":'"<<t<<'\'';
	cout<<endl;
	return stk.empty();
}

int main () {
	// anasys("[1,2,3,4]");
	anasys(" 34234 'asdasdalksdjfl asdkfla sdjf las dfls dlksd'");

	// cout<<boolalpha<<endl<<anasys("{1.7878:(-1.867868,2,3,4),3:{'hi':2,'jadesoul':{1:2,3:{-1:     2,3.2:[1,2,'hello'],  5:'asdas' },5:{1:  2,3  :{1:2,3 :4,5  :6},5:6}},5:6},5:6}")<<endl;
}



