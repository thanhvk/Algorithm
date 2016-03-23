#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
int soLonNhat(int a, int b, int c);

int main()
{
	freopen("choinon5.inp","r",stdin);
	freopen("choinon5.out","w",stdout);
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	printf("%d la so lon nhat",soLonNhat(a,b,c));

		
	return 0;
}

int soLonNhat(int a, int b, int c){
	if(a>b){
		if(a>c){
			return a;
		}else{
			return c;
		}
	}else{
		if(b>c){
			return b;
		}else{
			return c;
		}
	}
}	

