#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int n, sum, s[100];

int input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

int solve() {
    sum = 0;
    for (int i = 0; i < n; i++)
        sum += s[i];

    return sum;
}

int output() {
    float ave = sum/n;
    printf("%f\n%d\n", ave, sum);
}

int main()
{
    int ntest, itest;

    freopen("tieuhoc1.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
