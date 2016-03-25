#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
void sapXep(int a, int b ,int c);

int main()
{
	freopen("choinon8.inp","r",stdin);
	freopen("choinon8.out","w",stdout);
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	sapXep(a,b,c);
	
	return 0;
}

void sapXep(int a, int b ,int c){
	if(a>b && a>c){
		if(b>c){
			printf("%d %d %d",c,b,a);
		}else{
			printf("%d %d %d",b,c,a);
		}
	}else if(b>a && b>c){
		if(a>c){
			printf("%d %d %d",c,a,b);
		}else{
			printf("%d %d %d",a,c,b);
		}
	}else if(c>a && c>b){
		if(a>b){
			printf("%d %d %d",b,a,c);
		}else{
			printf("%d %d %d",a,b,c);
		}
	}
}


	

