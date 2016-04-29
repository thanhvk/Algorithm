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

int nhang,ncot;
int s[111][111];
bool d[111][111];
struct toado{
    int h,c;
};
toado huong[5] = {-1,0
    ,0,1
    ,1,0
    ,0,-1};

vector<int> vect;

void input(){
    scanf("%d %d",&nhang,&ncot);
    
    memset(d,0,sizeof(d));
    memset(s,0,sizeof(s));
    
    for (int i=0;i<nhang;i++)
        for (int j=0;j<ncot;j++)
            scanf("%d",&s[i][j]);
}

bool inside(int hang,int cot){
    if ( hang < 0 || hang >= nhang )
        return 0;
    if ( cot < 0 || cot >= ncot )
        return 0;
    return 1;
}

int dfs(int hang,int cot){
    int ht,ct;
    int sz = 1;
    d[hang][cot] = 1;
    for (int i=0;i<4;i++){
        ht = hang + huong[i].h;
        ct = cot  + huong[i].c;
        
        if (inside(ht,ct) && s[ht][ct] == 0 && d[ht][ct] == 0){
            sz = sz + dfs(ht,ct);
        }
    }
    
    return sz;
}

void solve(){
    vect.clear();
    
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
            if ( s[i][j] == 0 && d[i][j] == 0){
                int sz = dfs(i,j);
                vect.pb(sz);
            }
        }
    }
    
    sort(vect.begin(),vect.end());
    
    printf("%d",vect.size());
    for (int i=0;i<vect.size();i++)
    	printf(" %d",vect[i]);
    printf("\n");
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
