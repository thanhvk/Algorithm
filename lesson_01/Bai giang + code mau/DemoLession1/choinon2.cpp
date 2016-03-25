#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("choinon2.inp","r",stdin);
	freopen("choinon2.out","w",stdout);
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a==b){
		printf("%d bang %d",a,b);
	}else{
		printf("%d khac %d",a,b);
	}
	
	
	
	return 0;
}

