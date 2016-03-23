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
    sum1 = 0;
    sum2 = 0;
    min1 = 1111111;
    min2 = 1111111;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum1 += s[i][j]
                min1 = min(min1, s[i][j]);
            }

            if (i+j == n-1) {
                sum2 += s[i][j];
                min2 = min(min2, s[i][j])
            }
        }
    }
    return sum;
}

int output() {
    printf("%d %d %d %d", sum1, min1, sum2, min2);
}

int main()
{
    int ntest, itest, n, k;

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
