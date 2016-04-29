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
    int hang, cot;
};

toado huong[4] = {-1, 0
                , 0, 1
                , 1, 0
                , 0, -1};
bool d[111][111];
toado q[111111];

int s[111][111];
int nhang, ncot;
vector <int> vect;

void input() {
    scanf("%d %d", &nhang, &ncot);

    for (int i = 0; i < nhang; i++)
        for (int j = 0; j < ncot; j++)
            scanf("%d", &s[i][j]);
}

toado doMove(toado cur, int hg) {
    toado next;

    next.hang = cur.hang + huong[hg].hang;
    next.cot = cur.cot + huong[hg].cot;

    return next;
}

bool isOut(toado t) {
    if (t.hang < 0 || t.hang >= nhang)
        return 1;

    if (t.cot < 0 || t.cot >= ncot)
        return 1;

    return 0;
}

int loang(int h, int c) {
    toado cur, next;
    int dau = -1;
    int cuoi = 0;

    d[h][c] = 1;
    q[0].hang = h;
    q[0].cot = c;

    while (dau < cuoi) {
        dau++;
        cur = q[dau];

        for (int i = 0; i < 4; i++) {
            next = doMove(cur, i);

            if (isOut(next))
                continue;

            if (d[next.hang][next.cot] == 0 && s[next.hang][next.cot] == 0) {
                d[next.hang][next.cot] = 1;
                cuoi++;
                q[cuoi] = next;
            }
        }
    }

    return cuoi + 1;
}

void solve() {
    vect.clear();
    int sz;

    for (int i = 0; i < nhang; i++)
        for (int j = 0; j < ncot; j++)
            d[i][j] = 0;

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            if (s[i][j] == 0 && d[i][j] == 0) {
                sz = loang(i, j);
                vect.pb(sz);
            }
        }
    }
}

void output() {
    printf("%d ", vect.size());

    for (int i = 0; i < vect.size(); i++) {
        printf("%d", vect[i]);
        if (i != (vect.size() - 1))
            printf(" ");
    }
    printf("\n");
}

int main()
{
    freopen("loang1.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
