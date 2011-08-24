#include<iostream>
#include<vector>
using namespace std;

class number {
public:
	number(const vector<char>& base) {
		float_pos = 0;
		for ( int i=base.size()-1; i>=0; --i ) {
			if (base[i]=='.')
				float_pos=base.size()-1-i;
			else
				num_vec.push_back( base[i]-'0' );
		}
	}
	
	number(const number& other) {
		this->num_vec=other.num_vec;
		this->float_pos=other.float_pos;
	}

	friend ostream& operator <<( ostream& out, number& num ) {
		int i;
		for ( i=0; i<num.num_vec.size() && num.num_vec[i]==0; ++i );
		if (i<num.num_vec.size() && num.num_vec[i]!=0) {
			num.num_vec.erase(num.num_vec.begin(), num.num_vec.begin()+i);
			num.float_pos -= i;
		}
		
		int count = num.num_vec.size();
		bool dot_shown=false, num_shown=false;
		if (count<=num.float_pos) {
			dot_shown=true;
			out<<'.';
			for (i=0; i<num.float_pos-count; ++i)
				out<<0;
		}
		for ( i=num.num_vec.size()-1; i>=0; --i ) {
			--count;
			int n=num.num_vec[i];
			if (!(!dot_shown && !num_shown && n==0)) {
				num_shown=true;
				out<<n;
			}
			if ( count!=0 && count==num.float_pos ) {
				dot_shown=true;
				out<<'.';
			}
		}
		return out;
	}
	
	number& operator *=(const number& other) {
		number& me=*this;
		me.float_pos += other.float_pos;
		const vector<int>& va=me.num_vec;
		const vector<int>& vb=other.num_vec;
		vector<int> vc(va.size()+vb.size(), 0);
		
		int la=va.size(), lb=vb.size();
		for (int a=0; a<la; ++a) {
			for (int b=0; b<lb; ++b) {
				int multi = va[a]*vb[b];
				int s=multi/10, y=multi%10;
				vc[a+b] += y;
				if (s>0) 
					vc[a+b+1] += s;
			}
		}
		for (int i=0; i<la+lb-1; ++i) {
			vc[i+1] += vc[i]/10;
			vc[i] = vc[i]%10;
		}
		me.num_vec=vc;
		return me;
	}
	
private:
	vector<int> num_vec;
	int float_pos;
};

int main() {
	char ch[9];
	int pow, i;
	while(scanf("%s %d", ch, &pow)!=EOF){

		vector<char> base(ch, ch+6);
		
		number a(base), result(base);
		for ( i=1; i<pow; ++i )
			result *= a;
		cout<<result<<endl;
	}
}




