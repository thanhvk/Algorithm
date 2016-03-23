#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("choinon3.inp","r",stdin);
	freopen("choinon3.out","w",stdout);
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a==b){
		printf("%d bang %d",a,b);
	}else if(a>b){
		printf("%d lon hon %d",a,b);
	}else{
		printf("%d nho hon %d",a,b);
	}
	
	
	
	return 0;
}

