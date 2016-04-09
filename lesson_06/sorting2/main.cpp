#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

int s[111];
int odd[111], even[111];
int n;

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

bool cmp(int s1, int s2) {
    if (s1%2 == 0 && s2%2 == 1)
        return 1;
    if (s1%2 == 1 && s2%2 == 0)
        return 0;
    if (s1%2 == 0 && s2%2 == 0) {
        if (s1 < s2)
            return 1;
        return 0;
    }

    return 0;
}

void solve() {
    sort(s, s + n, cmp);
}

void output() {
    for (int i = 0; i < n; i++) {
        printf("%d ", s[i]);
    }

    printf("\n");
}

int main()
{
    int ntest;

    freopen("sorting2.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
