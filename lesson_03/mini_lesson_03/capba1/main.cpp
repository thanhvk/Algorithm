#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

char S1[256];

void input() {
    scanf("%s", &S1);
}

int solve() {
    char S2[256] = "";
    for (int i = 0; i < strlen(S1); i++)
        S2[i] = S1[strlen(S1) - i -1];

    return strcmp(S1, S2);
}

void output() {
    if (solve() == 0) {
        printf("%d ", 1);
    } else {
        printf("%d ", 0);
    }
}

int main()
{
    int ntest, itest;

    freopen("capba1.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
