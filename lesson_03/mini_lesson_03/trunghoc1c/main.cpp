#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int n, temp, s[100][100];

int input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &s[i][j]);
}

void solve() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
            temp = s[i][j];
            s[i][j] = s[i][n-j-1];
            s[i][n-j-1] = temp;
        }
    }
}

int output() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ntest, itest;

    freopen("trunghoc1c.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
