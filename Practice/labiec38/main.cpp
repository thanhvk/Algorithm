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
};

int printfNum(int q, int s) {
    for (int i = 0; i < q; i++) {
        if (s > 9) s = 0;
        printf("%d", s);
        s++;
    }

    return s;
};

void solve() {
    int temp = 0;
    for (int i = 1; i <= n; i++) {
        temp = printfNum(w, temp);
        printf("\n");
        for (int j = 1; j < w - 1; j++) {
            printfChar(w - j - 1, ' ');
            temp = printfNum(1, temp);
            printfChar(j, ' ');
            printf("\n");
        }
    }
    temp = printfNum(w, temp);
    printf("\n");
}

int main()
{
    freopen("labiec38.inp", "r", stdin);

    input();
    solve();

    return 0;
}
