#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

char S1[256], S2[256], *Sub;

void input() {
    scanf("%s", &S1);
    scanf("%s", &S2);
}

bool solve() {
    Sub = strstr(S1, S2);

    if (!Sub) {
        return false;
    }

    return true;
}

void output() {
    if (solve()) {
        printf("%s chua xau %s\n", S1, S2);
    } else {
        printf("%s khong nam trong %s\n", S2, S1);
    }
}

int main()
{
    int ntest, itest;

    freopen("capba2.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
