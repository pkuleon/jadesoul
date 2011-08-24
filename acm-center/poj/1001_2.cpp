 #include<iostream>
 using namespace std;
 #define Max 200
 #define Max_b 7
 typedef struct bigint{
     int data[Max];//从0开始存储
     int len;
     int i;//表示小数位
     bigint()
    {
        memset(data,0,sizeof(data));
        len=1;
        i=0;
    }
    friend bigint operator+(bigint,bigint);
    friend bigint operator*(bigint,bigint);
    void print();//小数点在第i位上，后面有i个小数位
    void operator=(const bigint&y){
        len=y.len;
        for(int j=0;j<y.len;j++)
            data[j]=y.data[j];
        i=y.i;
    }
}BIGINT;
BIGINT operator+(BIGINT x,BIGINT y)
{
    BIGINT r;
    int rlen=x.len>y.len?x.len:y.len;
    int tmp,i,jinwei=0;
    for(i=0;i<rlen;i++){
        tmp=x.data[i]+y.data[i]+jinwei;
        r.data[i]=tmp%10;
        jinwei=tmp/10;}
    if(jinwei)r.data[rlen++]=jinwei;
    r.len=rlen;
    return r;
}
BIGINT operator*(BIGINT x,BIGINT y)
{
   BIGINT  r;
   int i,j;
   memset(r.data,0,sizeof(r.data));
   r.len=x.len+y.len;
   for(i=0;i<x.len;i++)
       for(j=0;j<y.len;j++)
           r.data[i+j]+=x.data[i]*y.data[j];
   for(i=0;i<r.len;i++){
       r.data[i+1]+=r.data[i]/10;
       r.data[i]%=10;}
   while(r.data[i]){
       r.data[i+1]+=r.data[i];
       r.data[i]%=10;
       i++;}
   while(i>=0&&!r.data[i])i--;//这个已经消除了开头的零
   //末尾不存在零，不用考虑
   if(i!=-1)r.len=i+1;
   else r.len=1;//r为0的情况
   r.i=x.i+y.i;
   return r;
}
void BIGINT::print()
{
    int j,k;
    for(j=this->len-1;j>=this->i;j--)//输出了len-i个或是一个也还没输出
        printf("%d",this->data[j]);
    if(j==-1){
        putchar('\n');
        return;}
    putchar('.');
    if(j<this->i)//小数点后要补零
        for(k=this->i-1;k>j;k--)
            putchar('0');
    for(;j>=0;j--)
        printf("%d",this->data[j]);
    putchar('\n');
}
BIGINT cToBigint(char c[])
{
    int clen=(int)strlen(c),i=0,j=clen-1,k;
    BIGINT result;
    memset(result.data,0,sizeof(result.data));
    while(c[i]=='0'&&i<clen-1)i++;
    while(c[j]=='0'&&j>=0)j--;
    if(j>i){
        result.len=j-i;
        for(j=result.len-1;c[i]!='.';j--,i++)
            result.data[j]=c[i]-'0';
        result.i=j+1;
        for(i++;j>=0;j--,i++)
            result.data[j]=c[i]-'0';}
    else if(j<i){//
        result.len=1;
        result.i=0;}
    else if(i==j&&c[i]!='.'){//完全就是整数，没有小数点
        for(j=clen-1,k=0;j>=i;j--,k++)
            result.data[k]=c[j]-'0';
        result.len=k;
        result.i=0;
    }
    return result;
}
int main()
{
    BIGINT R,result;
    int n,i;
    char c[Max_b];
    while(scanf("%s %d",c,&n)!=EOF){
        memset(result.data,0,sizeof(result.data));
        result.i=0;
        result.len=1;
        R=cToBigint(c);
        result.data[0]=1;
        for(i=1;i<=n;i++)
            result=result*R;
        result.print();
    }
    return 0;
}