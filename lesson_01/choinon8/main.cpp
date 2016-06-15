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
int s[111];

void input() {
    for (int i = 0; i < 3; i++)
        scanf("%d", &s[i]);
}

void sortASC(int n[111]) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int solve() {
    sortASC(s);

    for (int i = 0; i < 3; i++) {
        if (i == 0)
            printf("%d", s[i]);
        else
            printf(" %d", s[i]);
    }
}

int main()
{
    int ntest;

    freopen("choinon8.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
