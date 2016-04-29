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

int n, nlang;
int flag[111][111];
int d[111], q[111], lev[111];

vecter <int> vect;

void intput() {
    int a, b;

    scanf("%d %d", &n, &nlang);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            flag[i][j] = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a, &b);

        flag[a][b] = 1;
        flag[b][a] = 1;
    }
}

void loang(int lang) {
    int dau = -1;
    int cuoi = 0;

    q[0] = lang;
    lev[0] = 0;
    d[lang]++;

    while (dau < cuoi) {
        dau++;
        int curr = q[dau];

        for (int next = 1; next <= n; next++) {
            if (next != cur && d[next] != d[cur] && flag[cur][next] == 1) {
                d[next] = d[cur];

                cuoi++;
                q[cuoi] = lang;
                lev[cuoi] = lev[dau] + 1;
            }
        }
    }

    if (d[lang] == 1) {
        vect.pb(cuoi + 1);
    }

    maxlen = max(maxlen, lev[cuoi]);
}

void solve() {
    for (int i = 1; i <= n; i++)
        d[i] = 0;

    for (int i = 1; i <= n; i++) {
        loang(i);
    }

    sort(vect.begin(), vect.end());
    reverse(vect.begin(), vect.end());
}

void output() {
    printf("%d ", vect.size());

    for (int i = 0; i < vect.size(); i++)
        printf("%d ", vect[i]);

    printf("%d", maxlen);
    printf("\n");
}

int main()
{
    freopen("loang3.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        intput();
        solve();
        output();
    }

    return 0;
}
