#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void doPrint(char kitu,int sl){
	for (int i=0;i<sl;i++)
		printf("%c",kitu);
}

int main()
{
	int n;
	int star,space;
	
	scanf("%d",&n);
	
	star = (n-1)*2+1;
	space = 0;
	for (int i=0;i<n;i++){
		doPrint(' ',space);
		doPrint('*',star);
		printf("\n");
		
		space++;
		star = star-2;
	}
	
	return 0;
}

