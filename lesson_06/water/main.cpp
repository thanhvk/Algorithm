#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

struct bottle {
    int now, capa;
};

bottle s[111];

int n;

int findMaxCapa (int s1, int s2) {
    if (s1 < s2) {
        s1 = s2;
        return s1;
    }

    return s1;
}

void input() {
    scanf("%d", &n);
    int maxcapa = 0;
    int temp = 0;
    int sumnow = 0;
    int sumcapa = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s[i].now, &s[i].capa);
        sumcapa += s[i].capa;
        sumnow += s[i].now;
        temp = s[i].capa;
        maxcapa = findMaxCapa(maxcapa, temp);
    }

    if ((sumcapa - sumnow) <= 0) {
        printf("%d\n", 0);
        return;
    }

    if ((sumcapa - sumnow) % maxcapa == 0) {
        printf("%d\n", (sumcapa - sumnow) / maxcapa);
        return;
    }

    printf("%d\n", (sumcapa - sumnow) / maxcapa + 1);
    return;
}

void solve() {
}

void output() {
}

int main()
{
    int ntest;

    freopen("water.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
