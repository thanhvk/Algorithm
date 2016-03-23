#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
int TongTien(int soDien);

int main()
{
	//freopen("choinon10.inp","r",stdin);
	//freopen("choinon10.out","w",stdout);
	
	int a;
	scanf("%d",&a);
	
	printf("Tong tien dien la: %d",TongTien(a));

	return 0;
}


int TongTien(int sodien){
	int tongtien = 1000;
	
	if ( sodien <= 50)
		tongtien += sodien * 230;
	else if ( sodien <= 100) {
		tongtien += 50*230;
		tongtien += (sodien-50)*480;
	} else if ( sodien <= 150 ) {
		tongtien += 50*230;
		tongtien += 50*480;
		tongtien += (sodien-100)*700;	
	} else {
		tongtien += 50*230;
		tongtien += 50*480;
		tongtien += 50*700;
		tongtien += (sodien-150)*900;	
	}
	
	return tongtien;
}

	

