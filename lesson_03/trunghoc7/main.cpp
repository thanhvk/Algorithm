#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>
#include <math.h>

using namespace std;

int val[111][111];
int nhang, ncot, sz, countS;

void input() {
    scanf("%d", &nhang);
    scanf("%d", &ncot);
    scanf("%d", &sz);

    for (int i = 0; i < nhang; i++)
        for (int j = 0; j < ncot; j++)
            scanf("%d", &val[i][j]);
}

bool checkSquare(int hang, int cot) {
    for (int i = hang; i < sz + hang; i++)
        for (int j = cot; j < sz + cot ; j++)
            if (val[i][j] != 1) return false;

    return true;
}

void solve() {
    countS = 0;
    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot ; j++) {
            if ((i + sz) <= nhang && (j + sz) <= ncot && checkSquare(i, j)) {
                countS++;
            }
        }
    }
}

void output() {
    printf("%d\n", countS);
}

int main()
{
    int ntest;

    freopen("trunghoc7.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
