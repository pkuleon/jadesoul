#pragma once
float get_rand();
//基因
class Gene
{
typedef unsigned char uchar;
friend class AI;
private:
	uchar a;
	uchar b;
	uchar c;
	uchar d;
	uchar e;
	uchar f;
	string gene;
private:
	string uchar2bin(uchar ch) {
		string bin(8, '0');
		for (int i=7; i>=0; --i) {
			bin[i]=(ch%2==1?'1':'0');
			ch/=2;
		}
		return bin;
	}	
public:
	Gene(uchar a=3, uchar b=127, uchar c=128, uchar d=128, uchar e=128, uchar f=128):a(a), b(b), c(c), d(d), e(e), f(f) {//构造函数
		gene=uchar2bin(a)+uchar2bin(b)+uchar2bin(c)+uchar2bin(d)+uchar2bin(e)+uchar2bin(f);
	}
	
	Gene(Gene& another) {//拷贝构造函数
		gene2uchars();
		if (this!=&another) {
			Gene& me=*this;
			me.gene=another.gene;
			me.a=another.a;
			me.b=another.b;
			me.c=another.c;
			me.d=another.d;
			me.e=another.e;
			me.f=another.f;
		}
	}
	
	void gene2uchars() {//gene字符串被改动后调用这个函数将改动反应到uchar成员上
		int i=0;
		a=(gene[i+0]-'0')*128+(gene[i+1]-'0')*64+(gene[i+2]-'0')*32+(gene[i+3]-'0')*16
			+(gene[i+4]-'0')*8+(gene[i+5]-'0')*4+(gene[i+6]-'0')*2+(gene[i+7]-'0')*1;
		i+=8;
		b=(gene[i+0]-'0')*128+(gene[i+1]-'0')*64+(gene[i+2]-'0')*32+(gene[i+3]-'0')*16
			+(gene[i+4]-'0')*8+(gene[i+5]-'0')*4+(gene[i+6]-'0')*2+(gene[i+7]-'0')*1;
		i+=8;
		c=(gene[i+0]-'0')*128+(gene[i+1]-'0')*64+(gene[i+2]-'0')*32+(gene[i+3]-'0')*16
			+(gene[i+4]-'0')*8+(gene[i+5]-'0')*4+(gene[i+6]-'0')*2+(gene[i+7]-'0')*1;
		i+=8;
		d=(gene[i+0]-'0')*128+(gene[i+1]-'0')*64+(gene[i+2]-'0')*32+(gene[i+3]-'0')*16
			+(gene[i+4]-'0')*8+(gene[i+5]-'0')*4+(gene[i+6]-'0')*2+(gene[i+7]-'0')*1;
		i+=8;
		e=(gene[i+0]-'0')*128+(gene[i+1]-'0')*64+(gene[i+2]-'0')*32+(gene[i+3]-'0')*16
			+(gene[i+4]-'0')*8+(gene[i+5]-'0')*4+(gene[i+6]-'0')*2+(gene[i+7]-'0')*1;
		i+=8;
		f=(gene[i+0]-'0')*128+(gene[i+1]-'0')*64+(gene[i+2]-'0')*32+(gene[i+3]-'0')*16
			+(gene[i+4]-'0')*8+(gene[i+5]-'0')*4+(gene[i+6]-'0')*2+(gene[i+7]-'0')*1;
	}
	
	void show() {//显示基因
		#ifdef PEEK_GENE
		for (int i=0; i<48; ++i) {
			cout<<gene[i];
			if ((i+1)%8==0)
				cout<<" ";
		}
		gene2uchars();
		cout<<" ["<<(int)a<<", "<<(int)b<<", "<<(int)c<<", "<<(int)d<<", "<<(int)e<<", "<<(int)f<<"]"<<endl;
		#endif
	}
	
	//发生突变, count为总个数, rate 为突变率,将按照rate将随机产生的count个不相同的位取反
	void mutate(float rate=0.15, uint count=1) {
		if (rate<get_rand())
			return;
		set<int> pos;
		int len=gene.size();
		while(pos.size()<count) {
			pos.insert((int)(get_rand()*len));
		}
		set<int>::iterator it, end=pos.end();
		//cout<<"正在反置第";
		for (it=pos.begin(); it!=end; ++it) {
			//cout<<(*it)+1<<" ";
			gene[(*it)]=(gene[(*it)]=='1')?'0':'1';
		}
		//cout<<"位"<<endl;
		gene2uchars();
	}
	
	//与另一个基于发生交叉，即基因重组 rate 为交叉率, 将随机产生一段区间并互相交换该区间的内容
	void cross(Gene& another, float rate=0.8) {
		if (this==&another) 
			return;
		if (rate<get_rand())
			return;
		//产生两个随机位置
		int len=gene.size();
		int start=(int)(get_rand()*len);
		int end=(int)(get_rand()*len);
		if (start>end)
			swap(start, end);
		assert(end!=len);
		Gene& me=*this;
		//cout<<"正在交换第";
		for (int i=start; i<=end; ++i) {
			//cout<<i+1<<" ";
			swap(me.gene[i], another.gene[i]);
		}
		//cout<<"位"<<endl;
		me.gene2uchars();
		another.gene2uchars();
	}
};
