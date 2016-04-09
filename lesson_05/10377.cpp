#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<map>

#define fi "10377.inp"
#define fo "10377.out"

using namespace std;

struct data
{
	int h;
	int c;
};

data huong[5] = { -1,0 
				 ,0,1
				 ,1,0
				 ,0,-1};
int nhang,ncot;
int itest,ntest;
int hg;
char ch[1000];
char s[100][100];
char out[5]={"NESW"};

void input()
{
	int i;
	
	scanf("%d %d\n",&nhang,&ncot);
	
	for (i=0;i<nhang;i++)
		gets(s[i]);
}

bool check(int hang,int cot)
{
	if ( hang < 0 || hang >= nhang )
		return 0;
	if ( cot < 0 || cot >= ncot )
		return 0;
	if ( s[hang][cot] == '*' )
		return 0;
	return 1;
}

void dieuhuong(char kt)
{
	if ( kt == 'R' )
		hg=(hg+1)%4;
	else
	{
		hg--;
		
		if ( hg < 0 )
			hg=3;
	}
}

void solve()
{
	int i,len;
	int ht,ct;
	int hang,cot;
	
	scanf("%d %d",&hang,&cot);
	hang--;
	cot--;
	hg=0;
	
	while (scanf("%s",&ch) > 0 )
	{
		len=strlen(ch);
		
		for (i=0;i<len;i++)
		{
			if ( ch[i] == 'F' )
			{
				ht=hang+huong[hg].h;
				ct=cot+huong[hg].c;
				
				if ( check(ht,ct) == 1 )
				{
					hang=ht;
					cot=ct;
				}
			}	
			else
			{
				if ( ch[i] == 'Q' )
				{
					printf("%d %d %c\n",hang+1,cot+1,out[hg]);
					return;
				}
				else
					dieuhuong(ch[i]);
			}
		}
	}
}

int main()
{
	freopen(fi,"r",stdin);
	freopen(fo,"w",stdout);
	
	scanf("%d",&ntest);
	
	for (itest=0;itest<ntest;itest++)
	{
		if ( itest > 0 )
			printf("\n");
			
		input();
		solve();		
	}

	return 0;
}

