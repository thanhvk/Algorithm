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

int k, n;
int d[111];
int s[111];
int dem;
vector <int> vect;

void input() {
    scanf("%d %d", &k, &n);
}

void chinhhop(int lev) {
    if (lev > k) {
        for (int i = 1; i <= k; i++)
            vect.pb(s[i]);
        dem++;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (d[i] == 0) {
            d[i] = 1;
            s[lev] = i;
            chinhhop(lev + 1);
            d[i] = 0;
        }
    }
}

void solve() {
    dem = 0;
    vect.clear();

    chinhhop(1);
}


void output() {
    printf("%d\n", dem);

    for (int i = 0; i < vect.size(); i = i + k) {
        for (int j = i; j < i + k; j++) {
            printf("%d ", vect[j]);
        }
        printf("\n");
    }

    printf("\n");
}

int main()
{
    freopen("chinhhop.inp", "r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
