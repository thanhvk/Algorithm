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
int moneys[] = {1, 5, 10, 20, 50};
int q[5];
int n;

void input() {
    scanf("%d", &n);
}

void solve() {
    // solution 1
    /*do {
        if (n >= moneys[4]) {
            q[4] = n/moneys[4];
            n = n%moneys[4];
        } else if (n >= moneys[3]) {
            q[3] = n/moneys[3];
            n = n%moneys[3];
        } else if (n >= moneys[2]) {
            q[2] = n/moneys[2];
            n = n%moneys[2];
        } else if (n >= moneys[1]){
            q[1] = n/moneys[1];
            n = n%moneys[1];
        } else {
            q[0] = n/moneys[0];
            n = n%moneys[0];
        }
    } while (n != 0);*/

    // better solution
    int x = n;
    for (int i = 4; i >= 0; i--) {
        if (x >= 0) {
            q[i] = x/moneys[i];
            x = x%moneys[i];
        }
    }
}

void output() {
    for (int i = 0; i < 5; i++) {
        printf("(%d) %d ", moneys[i], q[i]);
    }
    printf("\n");
}

int main()
{
    int ntest;

    freopen("tieuhoc3.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
