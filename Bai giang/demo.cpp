// Nguyen Duc Anh

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d",&n); // nhap so n
	while ( n > 0){
		// chuong trinh se chay cho den khi nao ban con nhap so > 0
		
		int tongchan = 0;	// khoi tri
		int tongle = 0;
		
		// vong lap i chay tu 1 --> n
		for (int i=1;i<=n;i++){
			if ( i%2 == 0) {
				// neu i la so chan thi cong vao tong chan
				tongchan = tongchan + i;
			} else {
				// neu i la so le thi cong vao tong ;e
				tongle = tongle + i;
			}
		}
		
		// in ket qua
		printf("tong cac so chan tu 1 den %d la %d\n",n,tongchan);
		printf("tong cac so le tu 1 den %d la %d\n",n,tongle);
		
		// nhap lai so n cho luot chay tiep theo
		scanf("%d",&n);		
	}
	
	getch(); //pause screen
	return 0;
}

