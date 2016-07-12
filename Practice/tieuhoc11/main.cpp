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
int s[111];

void input() {
    for (int i = 0; i < 111; i++)
        s[i] = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

bool isPrime(int num ) {
    if (num == 2) {
        return true;
    } else if (num > 2) {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num%i == 0) {
                return false;
            }
        }

        return true;
    }

    return false;
}

void solve() {
    int countCouple = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isPrime(s[i] + s[j]))
                countCouple++;
        }
    }

    printf("%d\n", countCouple);
}

void output() {

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

    return 0;
}
