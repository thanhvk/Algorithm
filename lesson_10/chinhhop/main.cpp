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

int k, n;
int s[111];
int d[111];

void input() {
    scanf("%d %d", &k, &n);
}

void output() {
    for (int i = 1; i <= k; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
}

void chinhhop(int lev) {
    if (lev > k) {
        output();
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (d[i] == 0) {
            s[lev] = i;
            d[i] = 0;
            chinhhop(lev + 1);
        }
    }

    d[lev] = 0;
}

void solve() {
    for (int i = 0; i < n; i++) {
        s[i] = 0;
    }

    chinhhop(1);
}

int main()
{
    freopen("chinhhop.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
