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

int solve() {
    if (a == b)
        return printf("%d bang %d", a, b);

    printf("%d khac %d", a, b);
}

int main()
{
    int ntest;

    freopen("choinon02.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
