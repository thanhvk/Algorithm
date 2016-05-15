#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>

#define inf 1000000000

using namespace std;

int n, kn, bd, kt;
int s[111][111];
int b[111], d[111], pre[111];

void input() {
    int m1, m2, kc;

    scanf("%d %d %d %d", &n, &kn, &bd, &kt);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s[i][j] = 0;
            s[j][i] = 0;
        }
    }

    for (int i = 0; i < kn; i++) {
        scanf("%d %d %d", &m1, &m2, &kc);

        s[m1][m2] = kc;
        s[m2][m1] = kc;
    }
}

int timmin() {
    int minn = inf;
    int res = -1;

    for (int i = 0; i < n; i++) {
        if (d[i] == 1)
            continue;

        if (b[i] < minn) {
            minn = b[i];
            res = i;
        }
    }
    return res;
}

void suanhan(int goc) {
    for (int i = 0; i < n; i++) {
        if (s[goc][i] != 0) {
            int temp = b[goc] + s[goc][i];

            if (temp < b[i]) {
                b[i] = temp;
                d[i] = 0;
                pre[i] = goc;
            }
        }
    }
}

void solve() {
    for (int i = 0; i < n; i++) {
        b[i] = inf;
        d[i] = 0;
        pre[i] = -1;
    }

    b[bd] = 0;

    while (d[kt] == 0) {
        int idx = timmin();

        if (idx == -1)
            return;

        d[idx] = 1;

        suanhan(idx);
    }
}

void output(int itest) {
    if (pre[kt] != -1 && d[kt] == 1) {
        printf("Case #%d: %d", itest + 1, b[kt]);
        printf("\n");
    } else {
        printf("Case #%d: unreachable", itest + 1);
        printf("\n");
    }
}

int main()
{
    freopen("10986.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest; itest < ntest; itest++) {
        input();
        solve();
        output(itest);
    }
}


