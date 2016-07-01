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
    // First half
    int a = 1;
    int b = h - 2;
    int c = 1;
    int d = h/3 + 1;
    // Second half
    int e = h/2;
    int f = 1;
    int g = h -2;
    int t = 1;

    for (int i = 0; i < h/2; i++) {
        printfChar(a, '*');
        printfChar(b, ' ');
        printfChar(c, '*');
        printfChar(d, ' ');
        printf("\n");
        a++;
        b -= 2;
        c += 2;
        d--;
    }

    printfChar(a + c - 1, '*');
    printf("\n");

    for (int i = 0; i < h/2; i++) {
        printfChar(e, '*');
        printfChar(f, ' ');
        printfChar(g, '*');
        printfChar(t, ' ');
        printf("\n");
        e--;
        f += 2;
        g -= 2;
        t++;
    }
}

int main()
{
    freopen("labiec41.inp", "r", stdin);

    input();
    solve();

    return 0;
}
