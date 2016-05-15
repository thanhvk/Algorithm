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
int d[111];
int s[111][111];
vector <int> vect;

void input() {
    int l1, l2;

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

int dfs(int lang)  {
    int sz = 1;
    d[lang] = 1;

    for (int i = 1; i <= nlang; i++) {
        if (i != lang && d[i] == 0 && s[lang][i] == 1) {
            sz = sz + dfs(i);
        }
    }

    return sz;
}

void solve() {
    int sz;

    vect.clear();
    for (int i = 1; i <= nlang; i++)
        d[i] = 0;

    for (int i = 1; i <= nlang; i++) {
        if (d[i] == 0) {
            sz = dfs(i);
            vect.pb(sz);
        }
    }
}

void output() {
    sort(vect.begin(), vect.end());

    printf("%d ", vect.size());

    for (int i = 0; i < vect.size(); i++) {
        printf("%d ", vect[i]);
    }

    printf("\n");
}

int main()
{
    freopen("loang2dq.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
