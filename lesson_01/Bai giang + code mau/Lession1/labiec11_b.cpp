#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*
	ham doPrint dung de in nhieu ki tu lien tiep
	param : kitu 	-> kitu can in
			soluong -> so luong ki tu muon in
*/
void doPrint(char kitu,int soluong){
	for (int i=0;i<soluong;i++)
		printf("%c",kitu);
}

int main()
{
	freopen("labiec11.inp","r",stdin);
	//freopen("labiec11.out","w",stdout);
	
	int hang,cot;
	
	scanf("%d %d",&cot,&hang);
	
	//in hang dau tien
	doPrint('*',cot);	// in 1 dong toan sao
	printf("\n");
	
	//in cac hang o giua
	for (int i=0;i<hang-2;i++){
		doPrint('*',1); 	// in 1 dau sao 
		doPrint(' ',cot-2);	// in ruot hinh chu nhat
		doPrint('*',1); 	// in 1 dau sao
		printf("\n");
	}
	
	//in hang cuoi cung
	doPrint('*',cot);	// in 1 dong toan sao
	printf("\n");
	
	return 0;
}


