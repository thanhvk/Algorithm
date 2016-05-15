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

int n, nduong;
int bd, kt;
int s[111][111];
int b[111], d[111], pre[111];

void input() {
    int l1, l2, d;

    scanf("%d %d", &n, &nduong);
    scanf("%d %d", &bd, &kt);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            s[i][j] = 0;
            s[j][i] = 0;
        }
    }

    for (int i = 0; i < nduong; i++) {
        scanf("%d %d %d", &l1, &l2, &d);

        s[l1][l2] = d;
        s[l2][l1] = d;
    }
}

int timmin() {
    int minn = inf;
    int res = -1;

    for (int i = 1; i <= n; i++) {
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
    for (int i = 1; i <= n; i++) {
        if (s[goc][i] != 0) {
            int temp = b[goc] + s[goc][i];

            if (temp < b[i]) {
                b[i] = temp;
                pre[i] = goc;
                d[i] = 0;
            }
        }
    }
}

void solve() {
    for (int i = 1; i <= n; i++) {
        b[i] = inf;
        d[i] = 0;
        pre[i] = -1;
    }

    b[bd] = 0;

    while (d[kt] == 0) {
        int idx = timmin();

        d[idx] = 1;

        suanhan(idx);
    }
}

void induong(int kt) {
    if (kt == -1)
        return;

    induong(pre[kt]);

    printf("%d ", kt);
}

void output() {
    printf("%d\n", b[kt]);
    induong(kt);
    printf("\n");
}

int main()
{
    freopen("dijkstra1.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}

