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

int k,n;
bool d[111];
int s[111];

void input(){
    scanf("%d %d",&k,&n);
}

void output(){
    for (int i=1;i<=k;i++)
        printf("%d ", s[i]);
    printf("\n");
}

void chinhhop(int lev){
    if ( lev > k ){
        output();
        return;
    }
    
    for (int i=1;i<=n;i++){
        if ( d[i] == 0 ){
            d[i] = 1;
            s[lev] = i;
            
            chinhhop(lev+1);
            
            d[i] = 0;
        }
    }
}

void solve(){
    chinhhop(1);
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
