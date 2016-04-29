#include <stdio.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>

#define pb push_back

using namespace std;

int n, goc;
bool s[111][111];
bool d[111];// danh dau di qua hay chua
int maxLev;

void input(){
    scanf("%d %d", &n, &goc);

    for(int i = 1; i <= n;i++)
        for(int j = 1; j <= n;j++)
            scanf("%d", &s[i][j]);
}

void dfs(int idx, int lev){
    d[idx] = 1;

    for (int i=1;i<=n;i++){
        if (s[idx][i] == 1 && d[i] == 0) {
            dfs(i, lev+1);
        }
    }

    maxLev = max(maxLev, lev);
}

void solve(){
    for (int i = 1; i <= n; i++)
        d[i] = 0;

    maxLev = 0;
    dfs(goc, 0);

    printf("%d\n", maxLev);
}
int main()
{
    freopen("dequy1.inp","r", stdin);

    int ntest;
    scanf("%d", &ntest);

    for(int i = 0; i < ntest; i++){
        input();
        solve();
    }

    return 0;
}

