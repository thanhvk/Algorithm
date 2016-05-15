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
int d[111], q[111];
int dau, cuoi;

void input() {
    int m, x;

    scanf("%d %d", &n, &bd);

    memset (s,0, sizeof(s));

    for (int i = 1; i <= n; i++) {
        scanf("%d", &m);

        for (int j = 0; j < m; j++) {
            scanf("%d", &x);
            s[i][x] = 1;
            s[x][i] = 1;
        }
    }
}

void loang(int xp) {
    dau = -1;
    cuoi = 0;

    q[0] = bd;
    d[xp] = 1;

    while (dau < cuoi) {
        dau++;

        int cur = q[dau];

        for (int next = 1; next <= n; next++) {
            if (s[cur][next] == 1 && d[next] == 0) {
                cuoi++;
                q[cuoi] = next;
                d[next] = 1;
            }
        }
    }

    return sz;
}

int solve() {
    loang(bd);

    int sz = cuoi + 1;
    sort(q, q + sz);

    printf("%d\n", sz);
    for (int i = 0; i < sz; i++)
        printf("%d ", q[i]);
    printf("\n");
}

int main()
{
    freopen("sars", "r", stdin);

    input();
    solve();

	return 0;
}


