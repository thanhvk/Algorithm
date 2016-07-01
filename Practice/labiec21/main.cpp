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
int nums[111111];

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
}

void solve() {
    int minn = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            minn = nums[i];
            sum = 1;
        } else {
            if (nums[i] < minn) {
                minn = nums[i];
                sum = 1;
            } else if (nums[i] == minn) {
                sum++;
            }
        }
    }

    printf("%d %d\n", minn, sum);
}

int main()
{
    int ntest;

    freopen("labiec21.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
