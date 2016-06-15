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

bool isTriangle() {
    if (
        (a+b) > c
        && (a+c) > b
        && (b+c) > a
    ) {
        return true;
    }

    return false;
}

float calcArea(int a, int b, int c) {
    float p = (a+b+c)/2;

    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int solve() {
    if (isTriangle()) {
        return printf("%f\n", calcArea(a, b, c));
    }

    printf("Khong phai tam giac\n");
}

int main()
{
    int ntest;

    freopen("choinon7.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
