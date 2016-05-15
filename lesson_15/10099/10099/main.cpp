#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <map>

#define pb push_back
#define inf 100000000

using namespace std;

int b[111];
bool d[111];
int pre[111];
int s[111][111];
int n,nduong;
int bd,kt,human;
int itest;

void input(){
    int u,v,x;

    memset(s,0,sizeof(s));

    for (int i=0;i<nduong;i++){
        scanf("%d %d %d",&u,&v,&x);
        s[u][v] = x;
        s[v][u] = x;
    }

    scanf("%d %d %d",&bd,&kt,&human);
}

int timmax(){
    int maxx = 0;
    int res = -1;
    for (int i=1;i<=n;i++){
        if ( d[i] == 1 )
            continue;
        if ( b[i] > maxx ){
            maxx = b[i];
            res = i;
        }
    }

    return res;
}

void suanhan(int idx){
    for (int i=1;i<=n;i++){
        if ( s[idx][i] == 0 )   // neu ko co duong
            continue;

        int temp = min(b[idx],s[idx][i]);
        if ( temp > b[i] ){
            b[i] = temp;
            d[i] = 0;
            pre[i] = idx;
        }
    }
}

void solve(){
    for (int i=1;i<=n;i++){
        b[i] = 0;
        d[i] = 0;
        pre[i] = 0;
    }

    b[bd] = inf;

    while (d[kt] == 0){
        int idx = timmax();
        d[idx] = 1;
        suanhan(idx);
    }
}

void output(){
    printf("Scenario #%d\n",itest);
    int ans = human / (b[kt]-1);
    if ( human%(b[kt]-1) > 0)   // con du
        ans++;
    printf("Minimum Number of Trips = %d\n",ans);
    printf("\n");
}

int main(){
    freopen("10099.inp","r",stdin);
    itest = 0;
    while (scanf("%d %d",&n,&nduong) > 0){
        itest++;
        if ( n == 0 && nduong == 0 )
            break;
        input();
        solve();
        output();
    }

    return 0;
}
