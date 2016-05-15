#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

void input() {
    s[1][2] = 1;
    s[1][3] = 1;
    s[1][5] = 1;
    s[2][3] = 1;
    s[2][5] = 1;
    s[3][4] = 1;
    s[3][5] = 1;
    s[4][5] = 1;
}

void dfs(int goc, int ) {

}

void solve() {
    dfs(1, 0);
}

int main()
{
    input();
    solve();

    return 0;
}
