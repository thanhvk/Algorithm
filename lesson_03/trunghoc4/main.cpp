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
int sum1, sum2, min1, min2;

void input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &val[i][j]);
}

void solve() {
    sum1 = 0;
    sum2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            if (i == j) {
                sum1 += val[i][j];
                if (min1 > val[i][j]) {
                    min1 = val[i][j];
                }
            }
            if (i == (n - j - 1)) {
                sum2 += val[i][j];
                if (min2 > val[i][j]) {
                    min2 = val[i][j];
                }
            }
            if (i == 0 && j == 0) {
                min1 = val[i][j];
            }
            if (i == 0 && j == (n - i - 1)) {
                min2 = val[i][j];
            }

        }
    }
}

void output() {
    printf("%d %d %d %d\n", sum1, min1, sum2, min2);
}

int main()
{
    int ntest;

    freopen("trunghoc4.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
