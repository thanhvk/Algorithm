#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
void GiaiPTB2(int a, int b,int c);

int main()
{
	freopen("choinon12.inp","r",stdin);
	freopen("choinon12.out","w",stdout);
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	GiaiPTB2(a,b,c);

	return 0;
}

void GiaiPTB2(int a, int b,int c){
	int delta;
	float x1,x2;
	delta = b*b - 4*a*c;
	if(delta==0){
		x1 = (float)-b/(2*a);
		printf("Phuong trinh co nghiem kep x1 = x2 = %f",x1);
	}else if(delta>0){
		x1 = (float)(-b-sqrt(delta))/2;
		x2 = (float)(-b+sqrt(delta))/2;
		printf("Phuong trinh co 2 nghiem x1 = %f va x2 = %f",x1,x2);
	}else {
		printf("Phuong trinh vo nghiem");
	}
}


	

