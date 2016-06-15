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
int gio, luong, tong;

void input() {
    scanf("%d %d", &gio, &luong);
}

int solve() {
    if (gio > 40) {
        tong = (gio - 40)*luong*2 + 40*luong;
        return tong;
    }

    tong = gio*luong;
}

void output() {
    printf("%d\n", tong);
}

int main()
{
    int ntest;

    freopen("choinon6.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
