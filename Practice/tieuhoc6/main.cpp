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
int n;
int s[111];

void input() {
    for (int i = 0; i < 111; i++)
        s[i] = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

int doCount(int x, int nums[111]) {
    int temp = 0;

    for (int i = 0; i < n; i ++) {
        if (x == nums[i])
            temp++;
    }

    return temp;
};

void solve() {
    int countNum = 0;
    int temp = 0;
    int idx = 0;
    for (int i = 0; i < n; i++) {
        temp = doCount(s[i], s);
        if (countNum < temp) {
            countNum = temp;
            idx = i;
        } else if (countNum == temp && s[idx] < s[i]) {
            idx = i;
        } else {
            continue;
        }
    }

    printf("%d %d\n", s[idx], countNum);
}

void output() {

}

int main()
{
    int ntest;

    freopen("tieuhoc6.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
