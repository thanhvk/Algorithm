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
int h, w, n;

void input() {
    scanf("%d %d %d", &h, &w, &n);
}

void printfChar(int q, char c) {
    for (int i = 0; i < q; i++) {
        printf("%C", c);
    }
};

void solve() {
    int s = 0;
    for (int i = 1; i <= h; i++) {
        if (i == 2 || i == s + n)  {
            printfChar(w, '*');
            printf("\n");
            s = i;
        } else {
            printfChar(1, '*');
            printfChar(w - 2, ' ');
            printfChar(1, '*');
            printf("\n");
        }
    }
    printf("\n\n\n");
}

int main()
{
    int ntest;

    freopen("labiec34.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
