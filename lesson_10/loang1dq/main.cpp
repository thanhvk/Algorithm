#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

int nhang, ncot;
int s[111][111];
int d[111][111];
struct toado {
    int h, c;
};
toado huong[4] = {-1, 0
                  , 0, 1
                  , 1, 0
                  , 0, -1};
vector <int> vect;

void input() {
    scanf("%d %d", &nhang, &ncot);

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            scanf("%d", &s[i][j]);
        }
    }
}

toado doMove(toado cur, int hg) {
    toado next;

    next.h = cur.h + huong[hg].h;
    next.c = cur.c + huong[hg].c;

    return next;
}

bool isOut(toado t) {
    if (t.h < 0 || t.h >= nhang)
        return 1;
    if (t.c < 0 || t.c >= ncot)
        return 1;
    return 0;
}

int dfs(int hang, int cot) {
    toado cur, next;
    int sz = 1;

    cur.h = hang;
    cur.c = cot;

    d[cur.h][cur.c] = 1;

    for (int i = 0; i < 4; i++) {
        next = doMove(cur, i);

        if (isOut(next))
            continue;

        if (s[next.h][next.c] == 0 && d[next.h][next.c] == 0) {
            sz = sz + dfs(next.h, next.c);
        }
    }

    return sz;
}

void solve() {
    int sz;

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            d[i][j] = 0;
        }
    }

    vect.clear();

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            if (s[i][j] == 0 && d[i][j] == 0) {
                 sz = dfs(i, j);
                 vect.pb(sz);
            }
        }
    }
}

void output() {
    sort(vect.begin(), vect.end());

    printf("%d ", vect.size());

    for (int i = 0; i < vect.size(); i++)
        printf("%d ", vect[i]);

    printf("\n");
}

int main()
{
    freopen("loang1dq.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
