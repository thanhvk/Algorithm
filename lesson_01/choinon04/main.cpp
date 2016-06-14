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
float n;

void input() {
    scanf("%f", &n);
}

int solve() {
    if (n >= 9) {
        return printf("Xuat Sac\n", n);
    }
    else if (n < 9 && n >= 8) {
        return printf("Gioi\n");
    }
    else if (n < 8 && n >= 7) {
        return printf("Kha\n");
    }
    else if (n < 7 && n >= 6) {
        return printf("TB Kha\n");
    }
    else if (n < 6 && n >= 5) {
        return printf("TBinh\n");
    }

    printf("Yeu\n");
}

int main()
{
    int ntest;

    freopen("choinon04.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
