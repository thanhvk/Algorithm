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
int s[111];

void input() {
    for (int i = 0; i < 111; i++) {
        s[i][j] = 0;
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i][j]);
    }
}

void solve() {
    int dai = 0;
    int tong = 0;
    int daiTam = 0;
    int tongTam = 0;

    for (int i = 0; i < n; i++) {
        if (i < i + 1)
    }
}

void output() {

}

int main()
{
    int ntest;

    freopen("trunghoc13.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
