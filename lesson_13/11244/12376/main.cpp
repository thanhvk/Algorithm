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
int s[111];
int path[111][111];
int sum;
int lastidx;

void input() {
    int a, b;
    scanf("%d %d", &n, &nduong);

    meset(s, 0, sizeof(s));

    for (int i = 0; i < n; i++)
        scanf("%d", &val[i]);

    for (int i = 0; i < nduong; i++) {
            scanf("%d %d", &a, &b);
            s[a][b] = 1;
    }
}

void dfs(int idx) {
    int maxx = 0;
    int saveidx = -1;
    lastidx = idx;

    for (int i = 0; i < n; i++) {
        if (s[idx][i] == 1) {
            if (val[i] > maxx) {
                maxx = val[i];
                saveidx = i;
            }
        }
    }

    sum += maxx;
    if (saveidx != -1)
        dfs(saveidx);
}

int solve() {
    sum = 0;
    dfs(0);

    printf("%d %d", sum, lastidx);
}

int main()
{
    freopen("12376", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest; itest < ntest; itest++) {
        input();
        solve();
    }

	return 0;
}


