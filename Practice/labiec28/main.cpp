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
int n;

void input() {
    scanf("%d", &n);
}

void printfChar(int m , char c) {
    for (int i = 0; i < m; i++)
        printf("%C", c);
};

void solve() {
    // solution 1
    /*int w = 0;
    for (int i = n; i  > 0; i--) {
        printfChar(w, ' ');
        printfChar((2*i - 1), '*');
        printfChar(w, ' ');
        printf("\n");
        w++;
    }*/

    // solution 2
    for (int i = n; i  > 0; i--) {
        printfChar(n - i, ' ');
        printfChar((2*i - 1), '*');
        printfChar(n - i, ' ');
        printf("\n");
    }
}

int main()
{
    freopen("labiec28.inp", "r", stdin);

    input();
    solve();

    return 0;
}
