#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("mamxanh8.inp","r",stdin);
	freopen("mamxanh8.out","w",stdout);
	
	int a;
	scanf("%d %d",&a);
	
	printf("Binh phuong cua %d la: %d\n",a,a*a);
	printf("Lap phuong cua %d la: %d\n",a,a*a*a);
	
	return 0;
}

