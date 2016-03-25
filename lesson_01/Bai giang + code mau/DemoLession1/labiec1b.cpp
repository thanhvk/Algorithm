#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec1b.inp","r",stdin);
//	freopen("labiec1.out","w",stdout);
	
	int a,tong;
	scanf("%d",&a);
	
	for(int i =1;i<= a; i++){
		tong +=i;
	}
	printf("%d\n",tong);
	
	return 0;
}




	
	
