#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

struct toado{
	int h,c;
};

toado doMove(toado oldLoc,int h){
	toado newLoc;
	newLoc.h = oldLoc.h + huong[h].h;	// cap nhat toa do hang moi theo huong h
	newLoc.c = oldLoc.c + huong[h].c;	// cap nhat toa do cot  moi theo huong h

	return newLoc;
}

toado huong[5] = {-1,0		// N tren
				  ,0,1		// E phai
				  ,1,0		// S duoi
				  ,0,-1};	// W trai

void input() {
    for int i = 0; i < nhang; i++)
        scanf("%s", &s[i]);
}

int getIndexFromChar(char c){
	if ( c == 'N' )
		return 0;
	if ( c == 'E' )
		return 1;
	if ( c == 'S' )
		return 2;
    if (c == 'W')
        return 3;
}

void solve() {
    toado current;
    current.h = xph - 1;
    current.c = xpc -1;

    flag[current.h][current.c] = 1;
}

void reset() {
    int j, j;

    for (int i = 0; i < 111; i++)
        for (int j = 0; j < 111; j++)
            flag[i][i] = 0;
}

int main()
{
    int ntest();

    freopen("10116.inp");

    while(scanf("%d %d %d", &nhang, &ncot, &cotxp) > 0) {
        if (nhang == 0; ncot == 0; cotxp ==0) {
            break;
        }
        input();
    }

	return 0;
}

