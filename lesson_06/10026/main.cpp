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

struct  congviec {
    int order;
    float t, s, avg;
};

vector <congviec> cv;

void input() {
    int n;
    congviec temp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        temp.order = i + 1;
        scanf("%f %f", &temp.t, &temp.s);
        temp.avg = temp.s / temp.t;
        cv.pb(temp);
    }
}

bool cmp (congviec cv1, congviec cv2) {
    if (cv1.avg > cv2.avg)
        return 1;
    return 0;
}

void solve() {
    int len = cv.size();

    sort(cv.begin(), cv.end(), cmp);

    for (int i = 0; i < len; i++) {
        printf("%d ", cv[i].order);
    }
}

int main()
{
    int ntest;

    freopen("10026.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
