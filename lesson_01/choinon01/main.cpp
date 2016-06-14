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
int a, b;

void input() {
    scanf("%d %d", &a, &b);
}

int findMax(int a, int b) {
    int maxNum = a;
    if (a < b)
        maxNum = b;

    return maxNum;
}

void solve() {
    printf("%d", findMax(a, b));
}

int main()
{
    int ntest;

    freopen("choinon01.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
