#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void doPrintChar(char kitu,int sl){
	for (int i=0;i<sl;i++)
		printf("%c",kitu);
}

void doPrintNum(int num,int sl){
	for (int i=0;i<sl;i++)
		printf("%d",num);
}

int main()
{
	int n,x;
	int num;
	int star,space;
	
	scanf("%d %d",&n,&x);
	
	star = (n-1)*2+1;
	space = 0;
	num = 1;
	
	for (int i=0;i<n;i++){
		doPrintChar(' ',space);
		doPrintNum(num,star);
		printf("\n");
		
		space++;
		star = star-2;
		num = num+x;
	}
	
	return 0;
}

