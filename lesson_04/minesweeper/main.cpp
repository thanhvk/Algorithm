#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct toado{
	int h,c;
};

toado huong[10] = {-1,0		// N tren
                  ,-1,1
				  ,0,1		// E phai
				  ,1,1
				  ,1,0		// S duoi
				  ,1,-1
				  ,0,-1
				  ,-1,-1};	// W trai

char s[111][111];
int nhang, ncot;

void input(){
	scanf("%d %d", &nhang, &ncot);

	for (int i = 0; i < nhang; i++)
        scanf("%d", &s[i]);
}

toado doMove(toado oldLoc,int h){
	toado newLoc;
	newLoc.h = oldLoc.h + huong[h].h;	// cap nhat toa do hang moi theo huong h
	newLoc.c = oldLoc.c + huong[h].c;	// cap nhat toa do cot  moi theo huong h

	return newLoc;
}

void solve(){

}

int main()
{
	int ntest;

	freopen("input.txt","r",stdin);

	scanf("%d",&ntest);

	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
	}

	return 0;
}

