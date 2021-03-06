#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int val[111], n, k;
int temp;

void input() {
    scanf("%d", &n);
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &val[i]);
}

void solve() {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (val[i] > val[j]) {
                temp = val[i];
                val[i] = val[j];
                val[j] = temp;
            }
        }
    }
}

void output(int itest) {
    printf("Test %d: %d\n", itest + 1, val[n - k]);
}

int main()
{
    int ntest, itest;

    freopen("tieuhoc5.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output(itest);
    }

    getchar();
    return 0;
}
