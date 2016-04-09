#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

#define pb push_back

using namespace std;

struct toado {
    int h, c;
};

toado huong[5] = {-1, 0
                  , 0, 1
                  , 1, 0
                  , 0, -1};

char str[1111];
int flag[1111][1111];

void input() {
    scanf("%s", str);
}

int getHuong(char c, int hg) {
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
    loc.h = loc.h + huong[hg].h;
    loc.c = loc.c + huong[hg].c;

    return loc;
}

float calDis(toado loc) {
    return sqrt(loc.h * loc.h + loc.c * loc.c);
}

void solve() {
    int len = strlen(str);
    int hg = 0;
    int countLos = 0;

    toado loc;
    loc.h = 0;
    loc.c = 0;

    memset(flag, 0, sizeof(flag));

    flag[loc.h + 1000][loc.c + 1000] = 1;

    for (int i = 0; i < len; i++) {
        hg = getHuong(str[i], hg);
        loc = doMove(loc, hg);

        if (flag[loc.h + 1000][loc.c + 1000] == 1) {
            countLos++;
        } else {
            flag[loc.h + 1000][loc.c + 1000] = 1;
        }
    }

    printf("%.3f %d\n", calDis(loc), countLos);
}

int main()
{
    int ntest;

    freopen("explore2.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
