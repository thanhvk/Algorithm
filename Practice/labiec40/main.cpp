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

void printfAboveMiddle(int n, int h) {
    for (int i = 1; i <= (h - 1)/2 -1; i++) {
        for (int j = 1; j <= n; j++) {
            printfChar((h - 1)/2 - i, ' ');
            printfChar(1, '*');
            printfChar(2*i - 1, ' ');
            printfChar(1, '*');
            printfChar((h - 1)/2 - i - 1, ' ');
        }
        printf("\n");
    }
}

void printfBellowMiddle(int n, int h) {
    for (int i = 1; i <= (h - 1)/2 -1; i++) {
        for (int j = 1; j <= n; j++) {
            printfChar(i, ' ');
            printfChar(1, '*');
            printfChar(h - 2*i - 2, ' ');
            printfChar(1, '*');
            printfChar(i - 1, ' ');
        }
        printf("\n");
    }
}

void printfFirstLastLines(int n, int h) {
    for (int i = 1; i <= n; i++) {
        printfChar((h - 1)/2, ' ');
        printfChar(1, '*');
        printfChar((h - 1)/2 - 1, ' ');
    }
    printfChar(1, ' ');
    printf("\n");
};

void printfMiddleLine(int n, int h) {
    for (int i = 1; i <= n; i++) {
        printfChar(1, '*');
        printfChar(h - 2, ' ');
    }
    printfChar(1, '*');
    printf("\n");
};

void solve() {
    printfFirstLastLines(n, h);
    printfAboveMiddle(n, h);
    printfMiddleLine(n, h);
    printfBellowMiddle(n, h);
    printfFirstLastLines(n, h);
    printf("\n");
}

int main()
{
    int ntest;

    freopen("labiec40.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
