#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int n, sum, mul, s[100];
float ave;

int input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

void solve() {
    sum = 0;
    mul = 1;
    for (int i = 0; i < n; i++) {
        sum += s[i];
        mul *= s[i];
    }
}

int output() {
    ave = sum/n;
    printf("%f %d\n", ave, mul);
}

int main()
{
    int ntest, itest;

    freopen("tieuhoc2.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
