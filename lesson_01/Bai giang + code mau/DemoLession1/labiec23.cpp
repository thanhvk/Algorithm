#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
int TongChuSo(int n);

int main()
{
	freopen("labiec23.inp","r",stdin);
	freopen("labiec23.out","w",stdout);
	
	int nTest;
	int n,x,d1=0;
	scanf("%d",&nTest);
	
	while(d1<nTest){
		
		scanf("%d",&n);
		printf("%d\n",TongChuSo(n));
		d1++;
	}	
		
	return 0;
}

int TongChuSo(int n){
	int tong=0,phandu;
	for(int i =0;;i++){
		phandu = n%10;
		tong+=phandu;
		n=n/10;
		if(n<10){
			tong +=n;
			break;
		}
	}
	return tong;
}






	
	
