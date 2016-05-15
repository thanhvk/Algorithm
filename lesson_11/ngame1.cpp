#include <iostream>
#include  <fstream>
#include  <string.h>
#include  <stdio.h>
#include  <stdlib.h>
#include <vector>

using namespace std;

int n;
int s[111][111];
bool found;

void input(){
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%d",&s[i][j]);
        }
    }
}

bool checksum(){
    int sum;
    int goc;
    
    // tong hang
    for (int i=1;i<=n;i++){
        sum = 0;
        for (int j=1;j<=n;j++){
            sum += s[i][j];
        }
        
        if ( i == 1){
            goc = sum;
        }else{
            if ( goc != sum )
                return false;
        }
    }
    
    // tong cot
    for (int j=1;j<=n;j++){
        sum = 0;
        for (int i=1;i<=n;i++){
            sum += s[i][j];
        }
        
        if ( sum != goc)
            return false;
    }
    
    return true;
}

void dequy(int hang,int cot){
    if ( hang == n + 1){
        if (checksum()){
            found = true;
        }
        
        return;
    }
    
    if ( s[hang][cot] != 0 ){
        if ( cot == n )
            dequy(hang+1,1);
        else
            dequy(hang,cot+1);
        
        return;
    }
    
    for (int i=1;i<=9;i++){
        s[hang][cot] = i;
        
        if ( cot == n )
            dequy(hang+1,1);
        else
            dequy(hang,cot+1);
        
        if ( found == true)
            return;
        
        s[hang][cot] = 0;
    }
}

void solve(){
    found = false;
    dequy(1,1);
}

void output(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}

int main(){
    freopen("input.txt","r",stdin);
    
    int ntest;
    
    scanf("%d",&ntest);
    
    for (int itest=0;itest<ntest;itest++){
        input();
        solve();
        output();
    }
    
    return 0;
}
