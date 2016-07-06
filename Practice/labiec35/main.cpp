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
int h, w, s;

void input() {
    scanf("%d %d %d", &h, &w, &s);
}

void printfChar(int q, char c) {
    for (int i = 0; i < q; i++)
        printf("%C", c);
}

void solve() {
    int temp = 0;
    for (int i = 0; i < h - 1; i++) {
        for (int j = 0; j < w; j++) {
            if (j == 0 || j == temp + s) {
                printfChar(1, '*');
                temp = j;
            } else {
                printfChar(1, ' ');
            }
        }
        printf("\n");
    }
    printfChar(w, '*');
    printf("\n\n");
}

int main()
{
    int ntest;

    freopen("labiec35.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
