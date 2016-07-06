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
int h;

void input() {
    scanf("%d", &h);
}

void printfChar(int q, char c) {
    for (int i = 0; i < q; i++) {
        printf("%C", c);
    }
};

void solve() {
    // above section
    for (int i = 1; i <= (h - 1)/2; i++) {
        printfChar(i - 1, ' ');
        printfChar(1, '$');
        printfChar(h - 2*i, ' ');
        printfChar(1, '*');
        printfChar(i - 1, ' ');
        printf("\n");
    }

    // middle section
    printfChar((h - 1)/2, ' ');
    printfChar(1, '$');
    printfChar((h - 1)/2, ' ');
    printf("\n");

    // below section
    for (int i = (h - 1)/2; i > 0; i--) {
        printfChar(i - 1, ' ');
        printfChar(1, '*');
        printfChar(h - 2*i, ' ');
        printfChar(1, '$');
        printfChar(i - 1, ' ');
        printf("\n");
    }
}

int main()
{
    freopen("labiec31.inp", "r", stdin);

    input();
    solve();

    return 0;
}
