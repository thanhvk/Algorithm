#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
int tinhLuong(int soGio, int luong);

int main()
{
	freopen("choinon6.inp","r",stdin);
	freopen("choinon6.out","w",stdout);
	
	int soGio,luong;
	scanf("%d %d",&soGio,&luong);
	
	printf("%d",tinhLuong(soGio,luong));

		
	return 0;
}

int tinhLuong(int soGio, int luong){
	int tongLuong = 0;
	if(soGio > 40){
		tongLuong = (soGio - 40)*2*luong + 40*luong;
	}else{
		tongLuong = soGio*luong;
	}
	
	return tongLuong;
}

	

