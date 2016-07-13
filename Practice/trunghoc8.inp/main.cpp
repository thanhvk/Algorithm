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
int bd, kt, ck;

void input() {
    scanf("%d %d", &bd, &kt);
}

int tinhChuky(int n) {
    int demCk = 1;

    while (n > 1) {
        if (n%2 == 0) {
            demCk++;
            n = n/2;
        } else {
            demCk++;
            n = 3*n + 1;
        }
    }

    return demCk;
}

void solve() {
    ck = 0;
    for (int i = bd; i <= kt; i++ ) {
        int temp = tinhChuky(i);
        if (temp > ck)
            ck = temp;
    }

}

void output() {
    printf("%d %d %d\n", bd, kt, ck);
}

int main()
{
    int ntest;

    freopen("trunghoc8.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
