#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
bool checkIsPrime(int x);

int main()
{
	freopen("labiec12.inp","r",stdin);
	freopen("labiec12.out","w",stdout);
	
	int n,x;
	scanf("%d",&n);
		
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		
		if(checkIsPrime(x)){
			printf("%d la so nguyen to\n",x);
		}else{
			printf("%d khong la so nguyen to\n",x);
		}
	}
	
	
		
	return 0;
}

bool checkIsPrime(int x){
	if(x<2){
		return false;
	}else if(x>2){
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0){
				return false;
			}
		}
	}
	return true;
}




	
	
