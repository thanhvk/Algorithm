#include <iostream>
#include  <fstream>
#include  <string.h>
#include  <stdio.h>
#include  <stdlib.h>
#include <vector>

using namespace std;

int nhang,ncot;
char s[111][111];
int m,n,bd,x;
int q[111];
bool d[111];
int dau,cuoi;
vector<int> vect;

void input(){
    scanf("%d %d",&n,&bd);
    
    memset(s,0,sizeof(s));
    
    for (int i=1;i<=n;i++){
        scanf("%d",&m);     // so luong nguoi
        
        for (int j=0;j<m;j++){
            scanf("%d",&x); // thu tu tung nguoi
            s[i][x] = 1;
            s[x][i] = 1;
        }
    }
}

void loang(int xp){
    dau = -1;
    cuoi = 0;
    
    d[xp] = 1;
    q[0] = xp;
    
    while ( dau < cuoi ){
        dau++;
        
        int cur = q[dau];
        
        for (int nex=1;nex<=n;nex++){
            if ( d[nex] == 0 && s[cur][nex] == 1 ){
                cuoi++;
                q[cuoi] = nex;
                d[nex] = 1;
            }
        }
    }
}

void dfs(int xp){
    d[xp] = 1;
    
    for (int i=1;i<=n;i++){
        if ( d[i] == 0 && s[xp][i] == 1){
            dfs(i);
        }
    }
}

void solve(){
    //loang(bd);
    dfs(bd);
    
    for (int i=1;i<=n;i++){
        if ( d[i] == 1)
            vect.push_back(i);
    }
    
    printf("%d\n",vect.size());
    
    for (int i=0;i<vect.size();i++){
        printf("%d ",vect[i]);
    }
    printf("\n");
}

int main(){
    freopen("input.txt","r",stdin);
    
    input();
    solve();
    
    return 0;
}
