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

void input() {
    scanf("%d", &n);
}

void solve() {
    int h, m, s;
    int temp;

    h = n/3600;
    temp = n%3600;
    m = temp/60;
    s = temp%60;

    printf("%d:%d:%d\n", h, m, s);
}

int main()
{
    int ntest;

    freopen("mamxanh9.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
