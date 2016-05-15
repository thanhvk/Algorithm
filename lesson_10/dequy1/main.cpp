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

int n, bd;
int s[111][111];
int d[111];
int lev, maxLev;

void input() {
    scanf("%d %d", &n, &bd);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &s[i][j]);
}

void dequy(int goc, int lev) {
    d[goc] = 1;

    for (int i = 1; i <= n; i++) {
        if (d[i] == 0 && s[goc][i] == 1) {
            dequy(i, lev + 1);
        }
    }

    maxLev = max(lev, maxLev);
}

void solve() {
    maxLev = 0;

    for (int i = 1; i <= n; i++) {
        d[i] = 0;
    }

    dequy(bd, lev);

    printf("%d\n", maxLev);
}

int main()
{
    freopen("dequy1.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
