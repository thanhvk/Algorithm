#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int n,x;
int s[111];

void input(){
	scanf("%d %d",&n,&x);
	
	for (int i=0;i<n;i++)
		scanf("%d",&s[i]);
}

int binary_search(int so){
	int l = 0;
	int r = n-1;
	int m;
	
	while ( l <= r ){
		m = ( l+r )/2;
		
		if ( so == s[m] )
			return m;
		
		if ( so > s[m] )
			l = m+1;
		else
			r = m-1; 
	}
	
	return -1;
}

void solve(){
	printf("%d\n",binary_search(x));
}

int main()
{
	freopen("binarysearch.inp","r",stdin);
	
	input();
	solve();
	
	return 0;
}


