#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int s[111];
int temp, dem;

int input() {
    scanf("%d", &n);
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val[i]);
    }
}

int

int solve() {
    for (int i = 0; i < n; i++) {
        int dem = doCount(s[i]);

        if (dem == k-1) {
        }
    }
    printf("%d", val[i+1]);
}

int output() {

}

int main()
{
    int ntest, itest, n, k;

    freopen("tieuhoc5.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
