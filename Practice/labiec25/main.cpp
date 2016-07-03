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
int m = 0;
int s[11111];

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

bool isArith() {
    for (int i = 0; i < n - 1; i ++) {
        if (i == 0)
            m = s[i + 1] - s[i];
        else {
            if ((s[i + 1] - s[i]) != m)
                return false;
        }
    }

    return true;
}

void solve() {
    if (isArith()) {
        printf("%d\n", m);
    } else {
        printf("khong phai cap so cong\n");
    }
}

int main()
{
    int ntest;

    freopen("labiec25.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
