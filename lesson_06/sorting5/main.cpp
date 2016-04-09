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

char giaidau[255];
char s[255];

struct ketqua {
    char ten;
    int sotran, thang, hoa, bai;
    float diemso;
};

struct tran {
    char kt1, kt2, kq;
};

vector <tran> t;
vector <ketqua> kq;
int n, m;

void input() {
    n = 0;
    m = 0;
    char br;
    ketqua temp1;
    tran temp2;

    t.erase(t.begin(), t.end());
    kq.erase(kq.begin(), kq.end());

    scanf("%c", &br);
    gets(giaidau);
    scanf("%d", &n);
    scanf("%c", &br);

    for (int i = 0; i < n; i++){
        scanf("%c", &temp1.ten);
        temp1.sotran = 0;
        temp1.diemso = 0;
        temp1.thang = 0;
        temp1.hoa = 0;
        temp1.bai = 0;

        kq.pb(temp1);
        scanf("%c", &br);
    }

    scanf("%d", &m);
    scanf("%c", &br);

    for (int j = 0; j < m; j++) {
        scanf("%c", &temp2.kt1);
        scanf("%c", &br);
        scanf("%c", &temp2.kt2);
        scanf("%c", &br);
        scanf("%c", &temp2.kq);
        scanf("%c", &br);

        t.pb(temp2);
    }
}

void capnhat() {
    for (int i = 0; i < t.size(); i++) {
        for (int j = 0; j < kq.size(); j++) {
            if (t[i].kq == 'T' && kq[j].ten == t[i].kt1) {
                kq[j].sotran += 1;
                kq[j].diemso += 1;
                kq[j].thang += 1;
            }

            if (t[i].kq == 'T' && kq[j].ten == t[i].kt2) {
                kq[j].sotran += 1;
                kq[j].bai += 1;
                continue;
            }

            if (t[i].kq == 'H' && kq[j].ten == t[i].kt1) {
                kq[j].sotran += 1;
                kq[j].diemso += 0.5;
                kq[j].hoa += 1;
            }

            if (t[i].kq == 'H' && kq[j].ten == t[i].kt2) {
                kq[j].sotran += 1;
                kq[j].diemso += 0.5;
                kq[j].hoa += 1;
                continue;
            }

            if (t[i].kq == 'B' && kq[j].ten == t[i].kt1) {
                kq[j].sotran += 1;
                kq[j].bai += 1;
            }

            if (t[i].kq == 'B' && kq[j].ten == t[i].kt2) {
                kq[j].sotran += 1;
                kq[j].diemso += 1;
                kq[j].thang += 1;
                continue;
            }
        }
    }
}

bool cmp(ketqua kq1, ketqua kq2)
{
    if (kq1.diemso > kq2.diemso)
        return 1;
    if (kq1.diemso < kq2.diemso)
        return 0;

    if (kq1.ten < kq2.ten)
        return 1;
    if (kq1.ten > kq2.ten)
        return 0;
}

void solve() {
    capnhat();
    sort(kq.begin(), kq.end(), cmp);
}

void output() {
    printf("%s\n", giaidau);
    for (int i = 0; i < kq.size(); i++) {
        printf("%d) %c %.1f diem, %d tran, %d thang, %d hoa, %d bai\n", i + 1, kq[i].ten, kq[i].diemso, kq[i].sotran, kq[i].thang, kq[i].hoa, kq[i].bai);
    }
    printf("\n");
}

int main()
{
    int ntest;

    freopen("sorting5.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
        output();
    }

    return 0;
}
