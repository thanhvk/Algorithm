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

int nlang, nduong;
int s[111][111];
int q[111];
int d[111];
int maxlen;

void input() {
    scanf("%d %d", &nlang, &nduong);

    for (int i = 1; i <= nlang; i++) {
        for (int j = 1; j <= nlang; j++) {
            s[i][j] = 0;
            s[j][i] = 0;
        }
    }

    for (int i = 0; i < nduong; i++) {
        scanf("%d %d", &l1, &l2);

        s[l1][l2] = 1;
        s[l2][l1] = 1;
    }
}

void loang(int cur) {
    dau = -1;
    cuoi = 0;
    d[bt] = 1;
    q[0] = cur;
    lev[0] = 0;

    while(dau < cuoi) {
        dau++;
        for (int next = 1; next <= nlang; i++) {
            if (s[bt][i] == 1 && d[i] != 1) {
                cuoi++;
                d[i] = 1;
                q[cuoi] = i;
                lev[cuoi] = lev[dau] + 1;
                path[nex] = cur;
            }
        }
    }

    maxlen = max(maxlen, lev[cuoi]);
}

void solve() {
    memset(d, 0, sizeof(d));
    maxlen = 0;

    for (int i = 1; i <= nlang; i++)
        if (d[i] == 0)
            loang(1);
}

int main()
{
    freopen("loang3.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
