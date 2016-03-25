#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("mamxanh7.inp","r",stdin);
	freopen("mamxanh7.out","w",stdout);
	
	int r;
	float s,v,pi;
	scanf("%d %d",&r);
	
	pi= 3.14;
	s = 4*pi*r*r;
	v = (float)4/3*pi*r*r*r;
	
	printf("Dien tich hinh cau la: %f\n",s);
	printf("The tich hinh cau la: %f\n",v);
	
	return 0;
}

