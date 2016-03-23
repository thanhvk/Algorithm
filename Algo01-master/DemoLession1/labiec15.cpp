#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec15.inp","r",stdin);
	freopen("labiec15.out","w",stdout);
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n*2-1;j++)
            if (j==n-i-1 || j==n+i-1|| i ==n-1)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
		
	return 0;
}




	
	
