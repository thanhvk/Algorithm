#include <stdio.h>
#include <conio.h>
#include <windows.h>

void DoPrintf(int n, char kitu)
{
	for(int i = 0; i < n; i++)
	{
		printf("%c",kitu);
	}
}
void InDongDauCuoi(int N, int H)
{
	
	DoPrintf(H /2,' ');
	for(int i = 1; i <= N; i++)
	{
		DoPrintf(1,'*');
		DoPrintf(H -2,' ');
	}
	printf("\n");
	
}
void NuaTamGiacTren(int dong, int H, int SoLanLap)
{
	int dem = 1;
	for(int i = 2; i < dong; i++)// khoang trang trong tam giac
	{
		dem += 2;
	}
	int dem2 = 1;
	for(int i = H/2; i > dong; i--)// ngoai tam giac
	{
		dem2 += 2;
	}
	DoPrintf(H/2 - dong + 1,' ');

	for(int i = 1; i <= SoLanLap; i++)
	{
		DoPrintf(1,'*');
		DoPrintf(dem,' ');
		DoPrintf(1,'*');
		DoPrintf(dem2,' ');

	}	
	printf("\n");
}
void InDongGiua(int H, int N)
{
	for(int i = 1; i <= N; i++)
	{
		printf("*");
		DoPrintf(H -2,' ');
	}
	printf("*\n");
}
void NuaTamGiacDuoi(int dong, int H, int SoLanLap){
	int dem = 1;
	for(int i = H / 2 + 2; i < dong; i++)// khoang trang trong tam giac
	{
		dem += 2;
	}
	
	int dem2 = 1;
	for(int i = H- 1; i > dong; i--)// trong tam giac
	{
		dem2 += 2;
	}
	DoPrintf(dong - (H/2+1),' ');
	
	for(int i = 1; i<= SoLanLap; i++)
	{
		printf("*");
		DoPrintf(dem2,' ');
		printf("*");
		DoPrintf(dem, ' ');
		
	}
	printf("\n");
	
	
}
int main()
{
	int N;// so vien
	int H;// chieu cao
	scanf("%d",&N);
	do
	{
		scanf("%d",&H);
		if(H % 2 == 0)
		{
			printf("Nhap lai chieu cao !\n");
		}
	}while(H % 2 == 0);
	InDongDauCuoi(N,H);
	for(int i = 2; i <= H/2;i++)
	{
		NuaTamGiacTren(i,H,N);
	}
	InDongGiua(H,N);
	for(int i = H/ 2 + 2; i < H; i++)
	{
		NuaTamGiacDuoi(i,H,N);
	}
	InDongDauCuoi(N,H);
	getch();
	return 0;
}
