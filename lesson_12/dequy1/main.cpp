#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

void input() {
    scanf("%d %d", &n, &goc);

    for (int i = i; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            s[i][j] = 0;
        }
    }

    for (int i = i; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &s[i][j]);
        }
    }
}

int main()
{
    freopen("dequy1.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
