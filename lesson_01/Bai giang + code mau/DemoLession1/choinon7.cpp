#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
bool kiemTra(int a, int b, int c);
float dienTich(int a, int b, int c);

int main()
{
	freopen("choinon7.inp","r",stdin);
	freopen("choinon7.out","w",stdout);
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(kiemTra(a,b,c)){
		printf("%f",dienTich(a,b,c));
	}else{
		printf("Khong phai tam giac");
	}
	


		
	return 0;
}

bool kiemTra(int a, int b, int c){
	if(a>0&& b>0 &&c>0 && (a+b>c) &&(a+c>b) && (b+c>a)){
		return true;
	}else{
		return false;
	}
	return false;
}

float dienTich(int a, int b, int c){
	float dienTich,p;
	p = (float)(a+b+c)/2;
	dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
	return dienTich;
}


	

