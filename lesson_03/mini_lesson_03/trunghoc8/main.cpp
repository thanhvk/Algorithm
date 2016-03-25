#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>
#include <math.h>

using namespace std;

int cycles[1111111];
int i, j, countC, maxCycle, ind;

void input() {
    scanf("%d", &i);
    scanf("%d", &j);
}

void getCycles() {
    ind = 0;
    for (int n = i; n <= j; n++) {
        int m = n;
        countC = 0;

        while (m > 1) {
            if (m%2 != 0) {
                m = 3*m + 1;
                countC++;
            }
            if (m%2 == 0) {
                m = m/2;
                countC++;
            }

        }
        if (m == 1) {
            countC++;
            cycles[ind] = countC;
            ind++;
            continue;
        }
    }
}

void getMaxCycle() {
    for (int k = 0; k < (j - i + 1); k++) {
        if (k == 0) maxCycle = cycles[k];
        if (k > 0 && maxCycle < cycles[k]) maxCycle = cycles[k];
    }
}

void solve() {
    getCycles();
    getMaxCycle();
}

void output() {
    printf("%d %d %d\n", i, j, maxCycle);
}

int main()
{
    int ntest;

    freopen("trunghoc8.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
