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
        for (int j = 0; j < w - 1; j++) {
            if (j == 0) {
                printfChar(w, '*');
            } else {
                printfChar(w - j - 1, ' ');
                printfChar(1, '*');
                printfChar(j, ' ');
            }
            printf("\n");
        }
    }
    printfChar(w, '*');
}

int main()
{
    freopen("labiec36.inp", "r", stdin);

    input();
    solve();

    return 0;
}
