#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int s[111][111];
int n;
int sum1, sum2, min1, min2;

int input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &s[i][j]);
}

int solve() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && s[i][j] != 0) {
                return 0;
            }
            if (i > j && s[i][j] >= 0) {
                return 0;
            }
            if (i < j && s[i][j] <= 0) {
                return 0;
            }
        }
    }
    return 1;
}

int output() {
    printf(solve());
}

int main()
{
    int ntest, itest, n, k;

    freopen("trunghoc6.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
