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
int n,nduong,nquery;
int bd,kt;
int itest;

void input(){
    int u,v,x;

    memset(s,0,sizeof(s));

    for (int i=0;i<nduong;i++){
        scanf("%d %d %d",&u,&v,&x);
        s[u][v] = x;
        s[v][u] = x;
    }
}

int timmin(){
    int minn = inf;
    int res = -1;
    for (int i=1;i<=n;i++){
        if ( d[i] == 1 )
            continue;
        if ( b[i] < minn ){
            minn = b[i];
            res = i;
        }
    }

    return res;
}

void suanhan(int idx){
    for (int i=1;i<=n;i++){
        if ( s[idx][i] == 0 )   // neu ko co duong
            continue;

        int temp = max(b[idx],s[idx][i]);
        if ( temp < b[i] ){
            b[i] = temp;
            d[i] = 0;
            pre[i] = idx;
        }
    }
}

void dijsktra(int bd,int kt){
    for (int i=1;i<=n;i++){
        b[i] = inf;
        d[i] = 0;
        pre[i] = 0;
    }

    b[bd] = 0;

    while ( d[kt] == 0 ){
        int idx = timmin();

        if ( idx == -1 )
            break;

        d[idx] = 1;
        suanhan(idx);
    }
}

void solve(){
    for (int i=0;i<nquery;i++){
        scanf("%d %d",&bd,&kt);
        dijsktra(bd,kt);

        // output
        if ( b[kt] == inf )
            printf("no path\n");
        else
            printf("%d\n",b[kt]);
    }
}

int main(){
    freopen("input.txt","r",stdin);
    itest = 0;
    while (scanf("%d %d %d",&n,&nduong,&nquery) > 0){
        itest++;
        if ( n == 0 && nduong == 0 && nquery == 0)
            break;
        if ( itest > 1)
            printf("\n");
        printf("Case #%d\n",itest);
        input();
        solve();
    }

    return 0;
}
