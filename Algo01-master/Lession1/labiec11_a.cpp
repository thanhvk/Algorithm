#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("labiec11.inp","r",stdin);
	//freopen("labiec11.out","w",stdout);
	
	int hang,cot;
	
	scanf("%d %d",&cot,&hang);
	
	for (int i=0;i<hang;i++){
		for (int j=0;j<cot;j++){
			if ( i == 0 || i == hang - 1 || j == 0 || j == cot-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}


