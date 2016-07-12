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
int n, k;
int ntest, itest;
int s[111];

void input() {
    // Reset
    for (int i = 0; i < 111; i++)
        s[i] = 0;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

// Solution 1
/*void sortDesc(int nums[111]) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] < nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

void solve() {
    sortDesc(s);
}

void output(int test) {
    printf("Test %d: %d", test + 1, s[k - 1]);
    printf("\n");
}*/

// Solution 2
int doCount(int num) {
    int temp = 0;
    for (int i = 0; i < n; i++) {
        if (num > s[i])
            temp++;
    }
    return temp++;
}

void solve() {
    int x = 0;
    for (int i = 0; i < n; i++) {
        x = doCount(s[i]);
        if (x == n - k) {
            printf("Test %d: %d\n", itest + 1, s[i]);
            break;
        }
    }
}

void output() {

}

int main()
{
    freopen("tieuhoc5.inp", "r", stdin);
    scanf("%d", &ntest);

    for (itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
