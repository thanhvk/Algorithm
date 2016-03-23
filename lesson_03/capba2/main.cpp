#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

char s1[255], s2[255];

void input() {
    for (int i = 0; i < 2; i++)
        getstr(s1);
        getstr("\n");
        getstr(s2);
}

int solve() {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i < len; i++) {
        if (s[i] != s[len - i -1])
            return 0;
    }

    return 1;
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
