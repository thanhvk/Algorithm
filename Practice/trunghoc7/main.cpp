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
int nhang, ncot, kt;
int s[111][111];

void input() {
    for (int i = 0; i < 111; i++) {
        for (int j = 0; j < 111; j++) {
            s[i][j] = 0;
        }
    }

    scanf("%d %d %d", &nhang, &ncot, &kt);
    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            scanf("%d", &s[i][j]);
        }
    }
}

bool raNgoai(int x, int y) {
    if (x + kt > nhang)
        return true;
    if (y + kt > ncot)
        return true;

    return false;
}

bool hinhVuong(int x, int y) {
    for (int i = x; i < x + kt; i++) {
        for (int j = y; j < y + kt; j++) {
            if (s[i][j] == 0)
                return false;
        }
    }

    return true;
}

void solve() {
    int dem = 0;

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            if (raNgoai(i, j) || s[i][j] == 0)
                continue;
            if (hinhVuong(i, j))
                dem++;
        }
    }

    printf("%d\n", dem);
}

int main()
{
    int ntest;

    freopen("trunghoc7.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
