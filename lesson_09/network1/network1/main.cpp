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

int s[111][111];

void input() {
    int a, b;

    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            s[i][j] = 0;

    for (int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
    }
}

void solve() {
    int bd, deep;

    while (scanf("%d %d", &bd, &deep) > 0) {
        if (bd == 0 && deep == 0)
            break;
    }
}

void output() {

}

int main()
{
    freopen("network1.inp", "r", stdin);
    scanf("%d", &n);

    while (scanf("d", &n)) {
        if (n == 0)
            break;

        input();
        solve();
        output();
    }

    return 0;
}
