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

int usln(int n, int m) {
    n = abs(n);
    m = abs(m);

    if (n == 0 || m == 0) {
        return n + m;
    }
    while (n != m) {
        if (n > m) {
            n -= m;
        } else {
            m -= n;
        }
    }
    return n;
}

int bsnn(int n, int m) {
    return m*n/usln(n, m);
}

void solve() {
    printf("%d\n%d", usln(a, b), bsnn(a, b));
}

int main()
{
    int ntest;

    freopen("labiec10.inp", "r", stdin);

    input();
    solve();

    return 0;
}
