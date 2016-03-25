#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
void xacDinhSo(int a);

int main()
{
	freopen("choinon9.inp","r",stdin);
	freopen("choinon9.out","w",stdout);
	
	int a;
	scanf("%d",&a);
	
	xacDinhSo(a);
	


		
	return 0;
}

void xacDinhSo(int a){
	if(a>=0){
		if(a%2==0){
			printf("%d  la so chan",a);
		}else{
			printf("%d la so le",a);
		}
	}else{
		printf("%d la so am",a);
	}
}


	

