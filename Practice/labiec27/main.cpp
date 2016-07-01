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

void input() {
    scanf("%d %d", &a, &b);
}

void printfChar(int num, char c) {
    for (int i = 0; i < num; i++)
        printf("%C", c);
}

void solve() {
    printfChar(b, '*');
    printf("\n");
    for (int i = 0; i < (a - 1); i++) {
        printfChar((b - 1)/2, ' ');
        printfChar(1, '*');
        printfChar((b - 1)/2, ' ');
        printf("\n");
    }
}

int main()
{
    freopen("labiec27.inp", "r", stdin);

    input();
    solve();

    return 0;
}
