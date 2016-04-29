#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

struct toado{
	int h,c;
};

toado huong[8] = { -1,0
                    ,-1,1
                    ,0,1
                    ,1,1
                    ,1,0
                    ,1,-1
                    ,0,-1
                    ,-1,-1};

int n;
int s[111][111];
bool d[111][111];
toado q[11111];

void input(){
	scanf("%d",&n);

	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			scanf("%d",&s[i][j]);
}

toado doMove(toado from,int hg){
	toado to;

	to.h = from.h + huong[hg].h;
	to.c = from.c + huong[hg].c;

	return to;
}

bool isOut(toado t){
	if ( t.h < 0 || t.h >= n )
		return 1;
	if ( t.c < 0 || t.c >= n )
		return 1;
	return 0;
}

void loang(int hang, int cot) {
    toado cur, next;
    int dau = -1;
    int cuoi = 0;
    cur.h = hang;
    cur.c = cot;
    q[0] = cur;
    d[hang][cot] = 1;

    while (dau < cuoi) {
        dau++;
        cur = q[dau];

        for (int i = 0; i < 8; i++) {
            next = doMove(cur, i);

            if (isOut(next))
                continue;

            if (d[next.h][next.c] == 0 && s[next.h][next.c] == '1') {
                d[next.h][next.c] == 1;
                cuoi++;
                q[cuoi] = next;
            }
        }
    }
}

void solve(){
    int dem;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			d[i][j] = 0;

	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if ( d[i][j] == '1' && s[i][j] == 0){
				loang(i, j);
				dem++;
			}
		}
	}

	printf("%d", dem);
}

int main()
{
	freopen("thewar.inp","r",stdin);

	while (scanf("%d", &n) > 0) {
		input();
		solve();
	}

	return 0;
}


