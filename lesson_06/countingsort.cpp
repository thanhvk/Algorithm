#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int n;
int s[111];
int dem[111];

void input(){
	scanf("%d",&n);
	
	for (int i=0;i<n;i++)
		scanf("%d",&s[i]);
}

void solve(){
	for (int i=0;i<111;i++)
		dem[i] = 0;
	
	for (int i=0;i<n;i++)
		dem[s[i]]++;
	
	int idx = 0;
	for (int i=0;i<111;i++){
		while ( dem[i] > 0 ){
			s[idx] = i;
			idx++;
			dem[i]--;
		}
	}
}

void output(){
	for (int i=0;i<n;i++)
		printf("%d ",s[i]);
	printf("\n");
}

int main()
{
	freopen("countingsort.inp","r",stdin);
	
	input();
	solve();
	output();
	
	return 0;
}


