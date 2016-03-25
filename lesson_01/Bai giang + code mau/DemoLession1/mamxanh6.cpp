#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("mamxanh6.inp","r",stdin);
	freopen("mamxanh6.out","w",stdout);
	
	int r;
	float s,pi;
	
	scanf("%d",&r);
	
	pi= 3.14;
	s = pi*r*r;
	
	printf("Dien tich hinh tron co ban kinh %d la: %f\n",r,s);
	
	return 0;
}

