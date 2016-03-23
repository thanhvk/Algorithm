#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	freopen("choinon4.inp","r",stdin);
	freopen("choinon4.out","w",stdout);
	
	float diem;
	scanf("%f",&diem);
	
	if(diem>=9){
		printf("Xuat sac\n");
	}
	else if(8<=diem){
		printf("Gioi\n");
	}
	else if(7<=diem){
		printf("Kha\n");
	}
	else if(6<= diem){
		printf("TBKha\n");
	}
	else if(5<= diem){
		printf("Trung binh\n");
	}
	else{
		printf("Yeu\n");
	}
	
	return 0;
}

