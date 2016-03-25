#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int s[111][111];
int nhang,ncot,size;
int count;

void input(){
	scanf("%d %d %d",&nhang,&ncot,&size);
	
	for (int i=0;i<nhang;i++)
		for (int j=0;j<ncot;j++)
			scanf("%d",&s[i][j]);
}

bool check(int hang,int cot,int size){
	for (int i=hang;i<hang+size;i++)
		for (int j=cot;j<cot+size;j++)
			if (s[i][j] == 0)
				return false;
	return true;
}

void solve(){
	count = 0;
	
	for (int i=0;i<=nhang-size;i++)
		for (int j=0;j<=ncot-size;j++)
			if ( check(i,j,size) )
				count++;
}

void output(){
	printf("%d\n",count);
}

int main()
{
	int ntest;
	
	freopen("trunghoc7.inp","r",stdin);
	
	scanf("%d",&ntest);
	
	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
		output();
	}
	
	return 0;
}

