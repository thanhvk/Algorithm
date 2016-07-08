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
int n, h;

void input() {
    scanf("%d %d", &n, &h);
}

void printfChar(int q, char c) {
    for (int i = 0; i < q; i++)
        printf("%C", c);
};

void solve() {
    // Printf first line
    for (int i = 1; i <=n; i++) {
        printfChar(1, '*');
        printfChar(2*h - 3, ' ');
    }
    printfChar(1, '*');
    printf("\n");

    // Printf middle lines
    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j <= n; j++) {
            printfChar(i, ' ');
            printfChar(1, '*');
            printfChar(2*h - 2*i - 3, ' ');
            printfChar(1, '*');
            printfChar(i - 1, ' ');
        }
        printf("\n");
    }

    // Printf last line
    for (int i = 1; i <=n; i++) {
        printfChar(h - 1, ' ');
        printfChar(1, '*');
        printfChar(h - 2, ' ');
    }
    printf("\n");
}

int main()
{
    freopen("labiec39.inp", "r", stdin);

    input();
    solve();

    return 0;
}
