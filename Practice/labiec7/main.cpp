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

int a, b;

void printfChar(char c, int n) {
    for (int i = 0; i < n; i++)
        printf("%C", c);
}

void solve() {
    printfChar('*', a);
    for (int i = 0; i < (b - 2); i ++) {
        printfChar('*', 1);
        printfChar(' ', a - 2);
        printfChar('*', 1);
    }
    printfChar('*', a);
}

int main()
{
    freopen("labiec11.inp", "r", stdin);
    scanf("%d %d", &a, &b);
    solve();

    return 0;
}
