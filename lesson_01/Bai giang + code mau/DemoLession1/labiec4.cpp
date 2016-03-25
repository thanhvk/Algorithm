#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec4.inp","r",stdin);
//	freopen("labiec1.out","w",stdout);
	
	int x;
	
	for(int i =0;; i++){
		scanf("%d ",&x);
		if(x%10==0)
			break;
		printf("%d ",x);
	}
	
	return 0;
}




	
	
