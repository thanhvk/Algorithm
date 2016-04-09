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

struct str {
    char s[1111];
};

vector <str> vec;

void input() {
    str temp;

    gets(temp.s);
    vec.pb(temp);
}

bool cmp(str c1, str c2) {
    int len1 = strlen(c1.s);
    int len2 = strlen(c2.s);
    int len = min(len1, len2);

    for (int i = 0; i < len; i++) {
        if (c1.s[i] < c2.s[i])
            return 1;
        return 0;
    }
}

void solve() {
    sort(vec.begin(), vec.end(), cmp);
}

void output() {
    int len = vec.size();

    for (int i = 0; i < len; i++)
        printf("%s\n", vec[i].s);
}

int main()
{
    int ntest;
    char br;

    freopen("xapten.inp", "r", stdin);
    scanf("%d", &ntest);
    scanf("%c", &br);

    for (int itest = 0; itest < ntest; itest++) {
        input();
    }

    solve();
    output();

    return 0;
}
