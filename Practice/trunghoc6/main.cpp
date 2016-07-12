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

int isMatrixValid(int q, int m[111][111]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && s[i][j] != 0)
                return 0;
            if (i > j && s[i][j] >= 0)
                return 0;
            if (i < j && s[i][j] <= 0)
                return 0;
        }
    }

    return 1;
}

void solve() {
    printf("%d\n", isMatrixValid(n, s));
}

void output() {

}

int main()
{
    int ntest;

    freopen("trunghoc6.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
