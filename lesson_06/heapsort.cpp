#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int n;
int s[111];

void input(){
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++)
		scanf("%d",&s[i]);
}

void output(){
	for (int i=1;i<=n;i++)
		printf("%d ",s[i]);
	printf("\n");
}

void makeHeap(int pos,int end){
	int child = pos*2;
	
	while ( child <= end ){
		if ( child+1 <= end && s[child] < s[child+1] )
			child++;
		
		if ( s[pos] < s[child] ){
			swap(s[pos],s[child]);
			pos = child;
			child = pos*2;
		} else
			break;
	}
}

void createHeap(){
	for (int i=n/2;i>=1;i--)
		makeHeap(i,n-1);
}

void solve(){
	createHeap();
	
	for (int i=n;i>1;i--){
		swap(s[1],s[i]);
		makeHeap(1,i-1);	
	}
}

int main()
{
	freopen("heapsort.inp","r",stdin);
	
	input();
	solve();
	output();
	
	return 0;
}


