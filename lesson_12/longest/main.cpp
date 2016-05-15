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

struct toado() {
    int h, c;
}

int s[111][111];

int huong[3] = {1,-1
                ,1,0
                ,1,1};

void input() {
    scanf("%d %d", &nhang, &ncot);

    for (int i = 0; i < nhang; i++) {
        for (int j = 0; j < ncot; j++) {
            scanf("%d", &s[i][j]);
        }
    }
}

void solve() {
    for (int i = nhang - 1; i >= 0; i--){
        for (int j = ncot - 1; j >= 0; j--){

        }
    }
}

int main()
{
    freopen("longest1.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
