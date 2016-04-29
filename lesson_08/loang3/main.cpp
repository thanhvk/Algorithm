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

int nlang, nduong;
int lev[111];
int flag[111][111];
int d[111], q[111];
int maxLev;

vector <int> vect;

void input() {
    int l1, l2;

    scanf("%d %d", &nlang, &nduong);

    for (int i = 1; i <= nlang; i++) {
        for (int j = 1; j <= nlang; j++) {
            flag[i] [j] = 0;
            flag[j][i] = 0;
        }
    }

    for (int i = 0; i < nduong; i++) {
        scanf("%d %d", &l1, &l2);

        flag[l1][l2] = 1;
        flag[l2][l1] = 1;
    }
}

void loang(int lang) {
    int dau = -1;
    int cuoi = 0;

    q[0] = lang;
    lev[0] = 0;
    d[lang]++;

    while (dau < cuoi) {
        int cur;

        dau++;
        cur = q[dau];

        for (int next = 1; next <= nlang; next++) {
            if (next != cur && d[next] != d[cur] && flag[cur][next] == 1) {
                cuoi++;
                q[cuoi] = next;
                d[next] = d[cur];
                lev[cuoi] = lev[dau] + 1;
            }
        }
    }

    if (d[lang] == 1)
        vect.pb(cuoi + 1);

    maxLev = max(maxLev, lev[cuoi]);
}

void solve() {
    vect.clear();

    int sz;

    for (int i = 1; i <= nlang; i++)
        d[i] = 0;

    for (int i = 1; i <= nlang; i++)
        loang(i);

    sort(vect.begin(), vect.end());
    reverse(vect.begin(), vect.end());
}

void output() {
    printf("%d ", vect.size());
    for (int i = 0; i < vect.size(); i++)
        printf("%d ", vect[i]);
    printf("%d", maxLev);

    printf("\n");
}

int main()
{
    freopen("loang3.inp", "r", stdin);
    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
