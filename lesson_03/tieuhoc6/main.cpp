#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int val[111], dem[111], n;
int temp, ind, maxCount;

void input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &val[i]);
}

void sort() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (val[i] > val[j]) {
                temp = val[i];
                val[i] = val[j];
                val[j] = temp;
            }
        }
    }
}

void count() {
    maxCount = 0;
    ind = 0;

    for (int i = 0; i < n - 1; i++) {
        temp = 1;
        for (int j = i + 1; j < n; j++) {
            if (val[i] == val[j]) {
                temp++;
            }
        }
        if (maxCount <= temp) {
            maxCount = temp;
            ind = i;
        }
    }
}

void solve() {
    sort();
    count();
}

void output(int itest) {
    printf("%d %d\n", val[ind], maxCount);
}

int main()
{
    int ntest, itest;

    freopen("tieuhoc6.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output(itest);
    }

    getchar();
    return 0;
}
