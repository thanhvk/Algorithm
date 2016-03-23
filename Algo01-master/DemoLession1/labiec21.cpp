#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec21.inp","r",stdin);
	freopen("labiec21.out","w",stdout);
	
	int nTest;
	int n,x,d1=0,d2=0,xmin;
	scanf("%d",&nTest);
	
	while(d1<nTest){
		scanf("%d",&n);
		scanf("%d",&x);
		xmin= x;
		d2=1;
		for(int i=1;i<n;i++){
			scanf("%d",&x);
			
			if(x<xmin){
				xmin =x;
				d2=1;
			}
			if(x==xmin){
				d2++;
			}
		}
		printf("%d %d\n",xmin,d2);
		
		d1++;
	}	
		
	return 0;
}






	
	
