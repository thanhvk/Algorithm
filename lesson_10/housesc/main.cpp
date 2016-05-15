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

int s[111][111];
int d[111][111];
int printed;

vector <int> path;

void input() {
    s[1][2] = 1;
    s[1][3] = 1;
    s[1][5] = 1;
    s[2][3] = 1;
    s[2][5] = 1;
    s[3][4] = 1;
    s[3][5] = 1;
    s[4][5] = 1;
}

void output() {
    printf("1");
    for (int i = 1; i < path.size(); i++) {
        printf("%d", path[i]);
    }
    printf("\n");

    path.clear();
}

void vehinh(int goc, int lev) {
    for (int i = 1; i <= 5; i++) {
        if (d[goc][i] == 1 || d[i][goc] == 1) {
            continue;
        }

        if (goc != i  && (s[goc][i] == 1 || s[i][goc] == 1)) {
            d[goc][i] = 1;
            d[i][goc] = 1;
            path.pb(i);
            vehinh(i, lev + 1);
            if (printed)
                return;
            d[goc][i] = 0;
            d[i][goc] = 0;
        }
    }

    if (lev == 7) {
        output();
        printed = 1;
    }
}

void solve() {
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            d[i][j] = 0;

    vehinh(1, 0);
}

int main()
{
    input();
    solve();

    return 0;
}
