#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <math.h>
#define pb push_back

using namespace std;

struct toado {
    int hang, cot;
}

toado hg[5] = {-1, 0
                , 0, 1
                , 1, 0,
                , 0, -1};

int d[i][j];

int s[111][111];

void input() {
    int nhang, ncot;

    scanf("%d %d", &nhang, &ncot);

    for (int i = 0; i < nhang; i++)
        for (int j = 0; j < ncot; j++)
            scanf("%d", &s[i][j]);
}

toado doMove(toado curr, int hg) {
    toado next;

    next.hang = curr.hang + huong[hg].hang;
    next.cot = curr.cot + huong[hg].cot;

    return next;
}

int loang(i, j) {
    int dau = -1;
    int cuoi = 0;

}

bool isOut(toado curr) {
    if (curr.hang < 0 || curr.hang >= nhang)
        return true;
    if (curr.cot < 0 || curr.cot >= ncot)
        return true;
    return false;
}

void solve() {
    int sz = 0;

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++)
            if (d[i][j] == 0 && s[i][i] == 0)
                sz = loang(i, j);
    }
}

void output() {

}

int main()
{
    int ntest;

    freopen("loang1.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
