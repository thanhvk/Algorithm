#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int n, sum, s[100][100];

void input() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &s[i][j]);
        }
    }
}

void solve() {
    for (int j = 0; j < n; j++) {
        sum = 0;

        for (int i = 0; i < n; i++) {
            sum += s[i][j];
        }
        printf("%d\n", sum);
    }
}

int main()
{
    freopen("trunghoc1b.inp", "r", stdin);

    input();
    solve();

    getchar();
    return 0;
}
