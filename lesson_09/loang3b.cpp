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

int s[111][111];
int pre[111];
bool d[111];
int m,n;

void input(){
    int a,b;
    
    scanf("%d %d",&n,&m);
    
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            s[i][j] = 0;
    
    for (int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        s[a][b] = 1;
        s[b][a] = 1;
    }
}

void output(int kthuc){
    vector<int> vect;
    
    vect.clear();
    int temp = kthuc;
    vect.push_back(temp);
    
    while ( true){
        if ( pre[temp] == temp)
            break;
        temp = pre[temp];
        
        vect.push_back(temp);
    }
    
    reverse(vect.begin(), vect.end());
    
    printf("%d\n",vect.size()-1);
    for (int i=0;i<vect.size();i++)
        printf("%d ",vect[i]);
    printf("\n");
}

void loang(int bdau,int kthuc){
    int dau = -1;
    int cuoi = 0;
    int q[11111];
    
    q[0] = bdau;
    d[bdau] = 1;
    
    while ( dau < cuoi ){
        dau++;
        int cur = q[dau];
        
        for (int nex=1;nex<=n;nex++){
            if ( d[nex] == 0 && nex != cur && s[cur][nex] == 1 ){
                cuoi++;
                q[cuoi] = nex;
                d[nex] = 1;
                pre[nex] = cur;
                
                if ( nex == kthuc ){
                    output(kthuc);
                    return;
                }
            }
        }
    }
    
    printf("0\n");
}

void solve(){
    int bd,kt;
    
    scanf("%d %d",&bd,&kt);
    
    for (int i=1;i<=n;i++){
        pre[i] = i;
        d[i] = 0;
    }
    
    
    loang(bd,kt);
}

int main()
{
    freopen("input.txt","r",stdin);
    
    int ntest;
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
    }
    
    return 0;
}
