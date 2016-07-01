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

void solve() {
    int sum = 0;
    while (true) {
        sum += n%10;
        n = n/10;
        if (n < 10) {
            sum += n;
            break;
        }
    }
    printf("%d\n", sum);
}

int main()
{
    int ntest;

    freopen("labiec23", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
