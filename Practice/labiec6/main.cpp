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
    for (int i = 1; i < n; i++) {
        if (n%i == 0)
            printf("%d ", i);
    }
}

int main()
{
    int ntest;

    freopen("labiec6.inp", "r", stdin);

    input();
    solve();

    return 0;
}
