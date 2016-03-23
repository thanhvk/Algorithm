#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("mamxanh9.inp","r",stdin);
	freopen("mamxanh9.out","w",stdout);
	
	int giay,gio,phut;
	scanf("%d",&giay);
	
	gio = giay/3600;
	phut = (giay%3600)/60;
	giay = giay - gio*3600 - phut*60;
	
	printf("%d:%d:%d\n",gio,phut,giay);
	
	return 0;
}

