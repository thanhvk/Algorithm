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

int nhang, ncot;
char s[111][111];

toado huong[8] = {-1, 0
                  ,-1, 1
                  ,0, 1
                  ,1, 1
                  ,1, 0
                  ,1, -1
                  ,0, -1
                  ,-1, -1}

void input() {
    for (int i = 0; i < nhang; i++)
        scanf("%s", s[i]);
}

int loang(int hang, int cot) {
    int sz = 1;
    int dau = -1;
    int cuoi = 0;
    char temp[111][111];

    q[0] = s[hang][cot];

    while (dau < cuoi) {
        dau++;

    }

    return sz;
}

toado doMove(int hang, int cot, int hg) {
    toado next;

    next.h = hang + huong[hg].h;
    next.c = cot + huong[hg].c;

    return next;
}

void solve() {
    memset(d, 0, sizeof(d));
    int dem = 0;

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            if (s[i][j] == '*') {
                if (checkxq(i, j))
                    dem++;
            }
        }
    }

    printf("%d\n, dem");
}

int main()
{
    freopen("11244.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);



	return 0;
}


