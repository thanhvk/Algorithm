#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>
#include <math.h>

using namespace std;

int n, dem, val[111];

void input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &val[i]);
}

bool isPrime(int sum) {
    if (sum == 1) return false;
    if (sum == 2) return true;
    if (sum > 2) {
        for (int i = 2; i < sqrt(sum); i++) {
            if (sum%2 == 0 ) return false;
        }
    }

    return true;
}

void solve() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n ; j++) {
            if (isPrime(val[i] + val[j])) {
                dem++;
            }
        }
    }
}

void output() {
    printf("%d\n", dem);
}

int main()
{
    int ntest;

    freopen("tieuhoc11.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
