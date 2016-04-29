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
int vung;
int flag[111][111];
int d[111], q[111];

void input() {
    int lang1, lang2;

    scanf("%d %d", &nlang, &nduong);

    for (int i = 1; i <= nlang; i++) {
        for (int j = i + 1; j <= nlang; j++) {
            flag[i][j] = 0;
            flag[j][i] = 0;
        }
    }

    for (int i = 0; i < nduong; i++) {
        scanf("%d %d", &lang1, &lang2);

        flag[lang1][lang2] = 1;
        flag[lang2][lang1] = 1;
    }
}

void loang(int lang) {
    int dau = -1;
    int cuoi = 0;

    q[0] = lang;
    d[lang] = 1;

    while ( dau < cuoi) {
        int cur;

        dau++;
        cur = q[dau];

        for (int next = 1; next <= nlang; next++) {
            if (cur != next && d[next] == 0 && flag[cur][next] == 1) {
                cuoi++;
                q[cuoi] = next;
                d[next] = 1;
            }
        }
    }
}

void solve() {
    vung = 0;

    for (int i = 1; i <= nlang; i++)
        d[i] = 0;

    for (int i = 1; i <= nlang; i++) {
        if (d[i] == 0) {
            loang(i);
            vung++;
        }
    }

    printf("%d\n", vung);
}


int main()
{
    freopen("loang2.inp", "r", stdin);
    int ntest;

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
