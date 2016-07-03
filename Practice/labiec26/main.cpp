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
int s[11111];

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

// check interleaved
bool isInter() {
    for (int i = 0; i < n - 1; i ++) {
        if (s[i]*s[i + 1] > 0)
            return false;
    }

    return true;
}

void solve() {
    if (isInter()) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}

int main()
{
    int ntest;

    freopen("labiec26.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
