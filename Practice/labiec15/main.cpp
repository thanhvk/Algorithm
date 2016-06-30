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
int w = 1;

void printfChar(char c, int n) {
    for (int i = 0; i < n; i++)
        printf("%C", c);
}

void solve() {
    printfChar(' ', h - 1);
    printfChar('*', 1);
    printfChar(' ', h - 1);
    printf("\n");

    for (int i = 2; i <= h - 1; i++) {
        printfChar(' ', h - i);
        printfChar('*', 1);
        printfChar(' ', w);
        printfChar('*', 1);
        printfChar(' ', h - i);
        printf("\n");
        w += 2;
    }

    printfChar('*', w + 2);
}

int main()
{
    freopen("labiec15", "r", stdin);
    scanf("%d", &h);
    solve();

    return 0;
}
