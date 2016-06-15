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
int a, b, c;

void input() {
    scanf("%d %d %d", &a, &b, &c);
}

int solve() {
    int maxNum;
    maxNum = max(a, b);
    maxNum = max(maxNum, c);

    printf("%d la so lon nhat", maxNum);
}

int main()
{
    int ntest;

    freopen("choinon5.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
