#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

struct arr {
    int a, b, c;
};

arr s[111];
int n;

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &s[i].a, &s[i].b,&s[i].c);
}

bool cmp(arr s1, arr s2) {
    if (s1.a < s2.a)
        return 1;
    if (s1.a > s2.a)
        return 0;

    if (s1.b < s2.b)
        return 1;
    if (s1.b > s2.b)
        return 0;

    if (s1.c < s2.c)
        return 1;
    if (s1.c > s2.c)
        return 0;

    return 0;
}

void solve() {
    sort(s, s + n, cmp);
}

void output() {
    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", s[i].a, s[i].b, s[i].c);

    printf("\n");
}

int main()
{
    int ntest;

    freopen("sorting4.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
