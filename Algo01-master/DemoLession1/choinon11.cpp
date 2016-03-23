#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
void GiaiPT(int a, int b);

int main()
{
	freopen("choinon11.inp","r",stdin);
	freopen("choinon11.out","w",stdout);
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	GiaiPT(a,b);

	return 0;
}

void GiaiPT(int a, int b){
	float nghiem;
	if(a !=0){
		nghiem = (float)-b/a;
		printf("Phuong trinh da cho co 1 nghiem x = %f",nghiem);
	}
	else{
		if(b==0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}
}


	

