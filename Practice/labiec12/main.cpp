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

bool isPrime(int m) {
    if (m <= 1) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(m); i++) {
            if (m % i == 0) {
                return false;
            }
        }
    }

    return true;
}

void solve() {
    if (isPrime(n)) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to\n", n);
    }
}

int main()
{
    int ntest;

    freopen("labiec12.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
