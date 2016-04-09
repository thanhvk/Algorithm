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

struct toado {
    int hang, cot;
}

int s[111][111];

void input() {
    int l, d;

    scanf("%d %d", &l, &d);

    for (int i = 0; i < d; i++)
        for (int i = 0; i < 2; i++)
            scanf("%d", &s[i][j]);
}

void solve() {

    for (int i=0;i<n;i=++){

    }
}

void output() {

}

int main()
{
    int ntest;

    freopen("loang2.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
