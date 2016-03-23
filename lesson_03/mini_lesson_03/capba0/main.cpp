#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

char S1[256], S2[256];

void input() {
    scanf("%s", &S1);
    scanf("%s", &S2);
}

bool solve() {
    return strcmp(S1, S2);
}

void output() {
    if (solve() == 0) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
}

int main()
{
    int ntest, itest;

    freopen("capba0.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
