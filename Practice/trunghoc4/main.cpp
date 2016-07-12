#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <math.h>
#define pb push_back

using namespace std;
int n;
int s[111][111];

void input() {
    for (int i = 0; i < 111; i++) {
        for (int j = 0; j < 111; j++) {
            s[i][j] = 0;
        }
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &s[i][j]);
        }
    }
}

void solve() {
    int minMain = 0;
    int sumMain = 0;
    int minSub = 0;
    int sumSub = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Duong cheo chinh
            if (i == j) {
                sumMain += s[i][j];
                if (i == 0 && j == 0) {
                    minMain = s[i][j];
                } else if (minMain > s[i][j]) {
                    minMain = s[i][j];
                }
            }

            // Duong cheo phu
            if (i == (n - 1) - j) {
                sumSub += s[i][j];
                if (i == 0 && j == n - 1) {
                    minSub = s[i][j];
                } else if (minSub > s[i][j]) {
                    minSub = s[i][j];
                }
            }
        }
    }

    printf("%d %d %d %d\n", sumMain, minMain, sumSub, minSub);
}

void output() {

}

int main()
{
    int ntest;

    freopen("trunghoc4.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
