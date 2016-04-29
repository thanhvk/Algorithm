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

struct toado {
    int h, c;
};

toado huong[8] = {-1, 0
                 , -1, 1
                 , 0, 1
                 , 1, 1
                 , 1, 0
                 , 1, -1
                 , 0, -1
                 , -1, -1};

vector <toado> vect;
char s[111][111];

int nhang, ncot, ndiem;
int d[111][111];

void input() {
    toado temp;

    scanf("%d %d %d", &nhang, &ncot, &ndiem);

    for (int i = 0; i < nhang; i++) {
        scanf("%s", &s[i]);
        for (int j = 0; j < ncot; j++) {
            printf("%c", s[i][j]);
        }
        printf("\n");
    }
}

toado doMove(toado cur, int hg) {
    toado next;

    next.h = cur.h + huong[hg].h;
    next.c = cur.c + huong[hg].c;

    return next;
}

bool isOut(toado cur) {
    if (cur.h < 0 || cur.h >= nhang)
        return 1;
    if (cur.c < 0 || cur.c >= ncot)
        return 1;
    return 0;
}

void loang(int hang, int cot) {
    int dau = -1;
    int cuoi = 0;

    q[0] = cur;
    d[]
}

void solve() {
    for (int i = 1; i < nhang; i++) {
        for (int j = 1; j < ncot; j++) {
            d[i][j] = 0;
        }
    }

    for (int i = 1; i < nhang; i++) {
        for (int j = 1; j < ncot; j++) {
            if (d[i][j] == 0) {
                loang(i, j);
            }
        }
    }
}

void output() {

}

int main()
{
    freopen("wesland1.inp", "r", stdin);
    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
