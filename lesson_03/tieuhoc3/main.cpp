#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int m[] = {1, 5, 10, 20, 50};
int a[5], S;

void input() {
    scanf("%d", &S);
}

void solve() {
    a[4] = S/m[4];
    S = S%m[4];

    a[3] = S/m[3];
    S = S%m[3];

    a[2] = S/m[2];
    S = S%m[2];

    a[1] = S/m[1];
    S = S%m[1];

    a[0] = S/m[0];
}

void output() {
    printf("(%d) %d (%d) %d (%d) %d (%d) %d (%d) %d\n",
            m[0], a[0], m[1], a[1], m[2], a[2], m[3], a[3], m[4], a[4]);
}

int main()
{
    int ntest, itest;

    freopen("tieuhoc3.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
