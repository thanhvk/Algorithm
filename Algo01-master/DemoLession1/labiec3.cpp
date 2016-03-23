#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec3.inp","r",stdin);
//	freopen("labiec1.out","w",stdout);
	
	int n,x,tong;
	scanf("%d",&n);
	
	for(int i =0;i<=n; i++){
		scanf("%d ",&x);
		tong +=x;
	}
	printf("%d",tong);
	
	return 0;
}




	
	
