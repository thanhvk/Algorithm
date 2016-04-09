#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int n, r, l, sum, val[111];

void input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &val[i]);
}

void solve() {
    for (int i = 0; i < n - 1; i++) {
        if (i == 0) {
            l = 2;
            r = val[i+1] - val[i];
            sum = val[i];
        }

        if (i > 0 && r != (val[i+1] - val[i])) {
            if (sum < (val[i+1] + val[i])) {
                l = 2;
                sum = val[i+1] + val[i];
            }
        }

        if (i > 0 && r == (val[i+1] - val[i])) {
            l++;
            sum += val[i+1];
        }
    }
}

void output() {
    printf("%d %d\n", l, sum);
}

int main()
{
    int ntest;

    freopen("trunghoc13.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
