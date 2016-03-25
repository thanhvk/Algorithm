#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec2.inp","r",stdin);
//	freopen("labiec1.out","w",stdout);
	
	int a,tong;
	scanf("%d",&a);
	
	for(int i =0;i<= a; i++){
		if(i%2 !=0){
			tong +=i;
		}
	}
	printf("%d",tong);
	
	return 0;
}




	
	
