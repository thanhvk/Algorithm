#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;
void veHinhRong(int x, int y);
void doPrint(int num,char ch);

int main(){
	
	freopen("labiec11.inp","r",stdin);
	freopen("labiec11.out","w",stdout);
	
	int x,y;
	scanf("%d %d",&x,&y);
	
//	veHinhRong(x,y);
	doPrint(y,'*');
	printf("\n");
	
	//ve doan giua
	for(int i =0;i<x-2;i++){
		doPrint(1,'*');
		doPrint(y-2,' ');
		doPrint(1,'*');
		printf("\n");
	}
	
	doPrint(y,'*');
	getch();
	return 0;	
}

void veHinhRong(int x, int y){
	for(int i=0;i < x; i++){
		for(int j = 0; j < y; j++){
			if(i==0 || i == x-1 || j == 0 || j == y-1){
				printf("*");
			}else
			printf(" ");
		}
		printf("\n");
	}
}

void doPrint(int num,char ch){
	for(int i =0;i<num;i++)
		printf("%c",ch);
}
