#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>
#include <vector>
#include <map>

#define pb push_back

using namespace std;

struct student{
    char name[11];
    int diem[3];
};

int n;
student s[111];
int a [111], maxS;
char nameS[11];

void input() {
    scanf("%d", n);

    for (int i = 0; i < n; i++) {
        gets(s[i].name);
        for (int j = 0; j < n; j++) {
            scanf("%d %d\n", &s[i].diem[j]);
        }
    }
}

void solve() {
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            maxS = s[i].diem1 + s[i].diem2 + s[i].diem3;
        }
        if (i > 0) {
            maxS < (s[i].diem1 + s[i].diem2 + s[i].diem3);
            maxS = s[i].diem1 + s[i].diem2 + s[i].diem3;
            nameS = s[i].name;
        }
    }
}

void ouput() {
    printf("%c %c");
}

int main()
{
    freopen("login.inp", "r", stdin);

    int ntest;

    map<string, string> myMap;
    map<string, string> myCom;

    for (int itest = 0; itest < ntest ; itest++) {
        input();
        solve();
        output();
    }

    getchar();
    return 0;
}
