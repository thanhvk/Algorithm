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

// use for loop
/*int calcFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}*/

// use recusive
int calcFactorial(int n) {
    if (n == 2)
        return n;

    return n * calcFactorial(n - 1);
}

void solve() {
    printf("%d! = %d\n", n, calcFactorial(n));
}

int main()
{
    int ntest;

    freopen("labiec16.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
