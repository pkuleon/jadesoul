#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[110];
int  dp[110][110], path[110][110], n;

void solve(){
	memset( dp, 0, sizeof(dp) );
	for( int i= 0; i<= n; ++i ) dp[i][i]= 1;
	
	for( int p= 1; p< n; ++p )
	for( int i= 0; i< n- p; ++i )
	{
		int j= i+ p; dp[i][j]= 1<<30;
		
		if( str[i]== '(' && str[j]== ')'  ||
			str[i]== '[' && str[j]== ']'  &&
			dp[i+1][j-1]< dp[i][j]  ){
				dp[i][j]= dp[i+1][j-1];
				path[i][j]=  -1; }
		
		if( ( str[i]== '(' || str[i]== '[' )  &&
			dp[i+1][j]+ 1< dp[i][j] ){
				dp[i][j]= dp[i+1][j]+ 1;
				path[i][j]= -2; }
			
		if( ( str[j]== ')' || str[j]== ']' )  &&
			dp[i][j-1]+ 1< dp[i][j] ){
				dp[i][j]= dp[i][j-1]+ 1;
				path[i][j]= -3; }
				
		for( int k= i; k< j; ++k )
		if( dp[i][k]+ dp[k+1][j]< dp[i][j] ){
		dp[i][j]= dp[i][k]+ dp[k+1][j];	
		path[i][j]= k; }

	}
}

void print( int l, int r ){
	if( l> r ) return;
	if( l== r ){
		if(str[l]=='(' || str[l]== ')')printf("()");
		else printf("[]"); }
	else if( path[l][r]== -1 ){
		printf("%c",str[l]);
		print(l+1,r-1);
		printf("%c",str[r]); }
	else if( path[l][r]== -2 ){
		printf("%c",str[l]);
		print(l+1,r);
		if( str[l]== '(' ) printf(")");
		else printf("]"); }
	else if( path[l][r]== -3 ){
		if( str[r]== ')' ) printf("(");
		else			   printf("[");
		print(l,r-1);
		printf("%c",str[r] );
	}
	else{ 
		print( l, path[l][r] );
		print( path[l][r]+ 1, r ); }
}

int main(){
	while( gets(str)!= NULL ){
		if( strlen(str)== 0 ){
			puts(""); continue; }	
		n= strlen(str);
		solve();
		print(0,n-1); puts("");
	}
	
	return 0; }