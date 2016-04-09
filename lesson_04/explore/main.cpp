#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct toado {
    int h, c;
};

toado huong[5] = {
                -1, 0 // huong N = 0
                , 0, 1 // huong E = 1
                , 1, 0 // huong S = 2
                , 0, -1 // huong W = 3
                };

char str[222];

void input() {
    scanf("%s", &str);
}

int getIndexFromChar(char c, int hg) {
    if (c == 'N')
        return 0;
    if (c == 'E')
        return 1;
    if (c == 'S')
        return 2;
    if (c == 'W')
        return 3;
    if (c == 'C')
        return hg;
    if (c == 'B')
        return (hg + 2) % 4;
    if (c == 'R')
        return (hg + 1) % 4;
    return (hg + 3) % 4;
}

toado doMove(toado loc, int hg) {
    toado newLoc;

    newLoc.h = loc.h + huong[hg].h;
    newLoc.c = loc.c + huong[hg].c;

    return newLoc;
}

float calDistance(toado loc) {
    return sqrt(loc.h * loc.h + loc.c * loc.c);
}

void solve() {
    int len = strlen(str);
    int hg;
    toado loc;

    // khoi tao
    hg = 0;
    loc.h = 0;
    loc.c = 0;

    for (int i = 0; i < len; i++) {
        hg = getIndexFromChar(str[i], hg);
        loc = doMove(loc, hg);
    }

    printf("%.3f\n", calDistance(loc));
}

int main()
{
    int ntest;

    freopen("explore.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
