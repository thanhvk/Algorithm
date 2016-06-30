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

void printfChar(char c, int n) {
    //for (int i = 0; i < n; i++)
        //printf("%C", c);
}

void solve() {
    for (int i = 1; i <= h; i++) {
        printf("%d", i);
        //printfChar(" ", h - i);
        //printfChar("*", i + 2);
        //printfChar(" ", h - i);
        //printf("\n");
    }
}

int main()
{
    freopen("labiec7.inp", "r", stdin);
    scanf("%d", &h);
    printf("%d", h);
    //solve();

    return 0;
}
