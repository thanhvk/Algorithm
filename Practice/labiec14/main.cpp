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
    if (n%2 == 0) {
        printf("%d\n", n/2 - 1);
    } else {
        printf("%d\n", (n - 1)/2);
    }

    for (int i = 1; i < n/2 + 1; i++) {
        if ((n - i) > i)
            printf("%d %d\n", n - i, i);
    }
}

int main()
{
    freopen("labiec14.inp", "r", stdin);

    input();
    solve();

    return 0;
}
