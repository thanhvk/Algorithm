#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <math.h>
#define pb push_back

using namespace std;

int n;
int r1, r2;

struct emp {
    int val, idx;
};

emp e[111];

vector <int> bonus;

void input(){
    scanf("%d %d %d", &n, &r1, &r2);

    for (int i = 0; i < n; i++) {
        scanf("%d", &e[i].val);
        e[i].idx = i + 1;
    }
}

bool cmp(emp e1, emp e2) {
    if (e1.val > e2.val)
        return 0;
    return 1;
}

void searchRight(int num) {
    int l = 0;
    int r = n - 1;
    int d = r2 - r1;

    while (l <= r) {
        int m = (l + r) / 2;
        if (num = e[m].val) {
            printf("%d\n", e[m].val);
            bonus.pb(e[m].idx);
            l = m + 1;
        }
        if (num > e[m].val)
            l = m + 1;
        if (num < e[m].val) {
            if (num <= e[m].val - d) {
                printf("%d\n", e[m].val);
                bonus.pb(e[m].idx);
                r = m - 1;
            } else {
                r = m - 1;
            }
        }
    }
}

void searchLeft(int num) {
    int l = 0;
    int r = n - 1;
    int d = r2 - r1;

    while (l <= r) {
        int m = (l + r) / 2;
        if (num = e[m].val) {
            bonus.pb(e[m].idx);
            r = m - 1;
        }
        if (num > e[m].val)
            l = m + 1;
        if (num < e[m].val) {
            if (num <= e[m].val - d) {
                bonus.pb(e[m].idx);
                r = m - 1;
            } else {
                r = m - 1;
            }
        }
    }
}

void solve(){
    bonus.clear();
	sort(e, e + n + 1, cmp);
	for (int i = 0; i < n; i++)
        printf("%d ", e[i + 1]);
    printf("\n");

    searchRight(r1);
    //searchLeft(r1);
    for (int i = 0; i < bonus.size(); i++)
        printf("%d ", bonus[i]);
    //printf("%d\n", bonus.size());

	/*sort(bonus.begin(), bonus.end(), cmp);
	for (int i = 0; i < bonus.size(); i++) {
        if (i > 0)
            printf(" ");
        printf("%d", bonus[i]);
    }
    printf("\n");*/
}

int main()
{
    int ntest;

    freopen("bonus.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int i = 0; i < ntest; i++) {
        input();
        solve();
    }

	return 0;
}

