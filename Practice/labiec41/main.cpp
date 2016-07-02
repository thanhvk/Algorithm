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

void printfChar(int num, char c) {
    for (int i = 0; i < num; i++)
        printf("%C", c);
}

void solve() {
    for (int i = 1; i <= h/2; i++) {
        printfChar(i, '*');
        printfChar(h - 2*i, ' ');
        printfChar(2*i - 1, '*');
        printfChar((h - 2*i + 1)/2, ' ');
        printf("\n");
    }

    printfChar(3*h/2, '*');
    printf("\n");

    for (int i = 1; i <= h/2; i++) {
        printfChar((h - 2*i + 1)/2, '*');
        printfChar(2*i - 1, ' ');
        printfChar(h - 2*i, '*');
        printfChar(i, ' ');
        printf("\n");
    }
}

int main()
{
    freopen("labiec41.inp", "r", stdin);

    input();
    solve();

    return 0;
}
