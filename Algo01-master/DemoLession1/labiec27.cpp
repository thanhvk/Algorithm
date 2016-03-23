#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec27.inp","r",stdin);
	freopen("labiec127.out","w",stdout);
	
	int x,y;
	scanf("%d %d",&x,&y);
//	doPrint(y,'*');
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(i==0||j==y/2){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
		
	return 0;
}





	
	
