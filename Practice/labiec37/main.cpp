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
int n, w;

void input() {
    scanf("%d %d", &n, &w);
}

void printfChar(int q, char c) {
    for (int i = 0; i < q; i++)
        printf("%C", c);
}

void solve() {
    for (int i = 0; i < n; i++) {
        printfChar((w - 1)/2, ' ');
        printfChar(1, '*');
        printfChar((w - 1)/2, ' ');
        printf("\n");

        // above section
        for (int j = 1; j < (w - 1)/2; j++) {
            printfChar((w - 1)/2 - j, ' ');
            printfChar(1, '*');
            printfChar(2*j - 1, ' ');
            printfChar(1, '*');
            printfChar((w - 1)/2 - j, ' ');
            printf("\n");
        }

        // middle section
        printfChar(1, '*');
        printfChar(w - 2, ' ');
        printfChar(1, '*');
        printf("\n");

        // below section
        for (int f = 1; f < (w -1)/2; f++) {
            printfChar(f, ' ');
            printfChar(1, '*');
            printfChar(w - (2*f + 2), ' ');
            printfChar(1, '*');
            printfChar(f, ' ');
            printf("\n");
        }
    }
    printfChar((w - 1)/2, ' ');
    printfChar(1, '*');
    printfChar((w - 1)/2, ' ');
    printf("\n");
}

int main()
{
    freopen("labiec37.inp", "r", stdin);

    input();
    solve();

    return 0;
}
