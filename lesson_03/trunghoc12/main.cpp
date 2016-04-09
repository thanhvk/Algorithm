#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int n, val[111][111];

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &val[i][j]);
}

int solve() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (val[i][j] != val[j][i]) {
                return 0;
            }
        }
    }

    return 1;
}

void output() {
    printf("%d\n", solve());
}

int main()
{
    int ntest;

    freopen("trunghoc12.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
