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
int h, x;

void input() {
    scanf("%d %d", &h, &x);
}

void printfChar(int n , char c) {
    for (int i = 0; i < n; i++)
        printf("%C", c);
};

void printfNum(int n , int m) {
    for (int i = 0; i < n; i++)
        printf("%d", m);
};

void solve() {
    // solution 1
    int w = 1;
    for (int i = h; i > 0; i--) {
        printfChar(h - i, ' ');
        printfNum(2*i - 1, w);
        printfChar(h - i, ' ');
        printf("\n");
        w += x;
    }
}

int main()
{
    freopen("labiec29.inp", "r", stdin);

    input();
    solve();

    return 0;
}
