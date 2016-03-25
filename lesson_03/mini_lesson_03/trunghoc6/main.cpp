#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>
#include <math.h>

using namespace std;

int n, val[111][111];

void input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &val[i][j]);
}

bool solve() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            if (i == j && val[i][j] != 0) {
                return false;
            }
            if (i > j && val[i][j] >= 0) {
                return false;
            }
            if (i < j && val[i][j] <= 0) {
                return false;
            }
        }
    }

    return true;
}

void output() {
    if (solve()) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
}

int main()
{
    int ntest;

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
