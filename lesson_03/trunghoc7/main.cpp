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
int nhang, ncot, k, count;

int input() {
    scanf("%d %d %d", &nhang, &ncot, &k);

    for (int i = 0; i < nhang; i++)
        for (int j = 0; j < ncot; j++)
            scanf("%d", &s[i][j]);
}

bool isSquare(int hang, int cot, int size) {
    for (int i = hang; i < hang+size;i++)
        for (int j = hang; j < hang+size;j++)
            if (s[i][j] == 0)
                return false;

    return true;
}

int solve() {
    for (int i = 0; i < nhang-k; i++) {
        for (int j = 0; j < ncot-k; j++) {
            if (isSquare(i, j, k))
                count++;
        }
    }

    return count;
}

int output() {
    printf("%d", solve());
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
