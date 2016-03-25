#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("choinon1.inp","r",stdin);
	freopen("choinon1.out","w",stdout);
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a>b){
		printf("So lon nhat = %d",a);
	}else{
		printf("So lon nhat = %d",b);
	}
	
	
	
	return 0;
}

