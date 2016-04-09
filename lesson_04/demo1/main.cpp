#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct toado{
    int h,c;
};

toado huong[8] { -1,0
                ,-1,1
                ,0,1
                ,1,1
                ,1,0
                ,1,-1
                ,0,-1
                ,-1,-1};

char s[111][111];
int sum[111][111];
int nhang,ncot;

void input(){
    scanf("%d %d",&nhang,&ncot);

    for (int i=0;i<nhang;i++)
        scanf("%s",&s[i]);

    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
            if ( s[i][j] == '*' )
                sum[i][j] = -1;
            else
                sum[i][j] = 0;
        }
    }
}

bool outrange(int hang,int cot){
    if ( hang < 0 || hang >= nhang )
        return 1;
    if ( cot < 0 || cot >= ncot )
        return 1;
    return 0;
}

void checkxq(int hang,int cot){
    for (int i=0;i<8;i++){
        int ht = hang + huong[i].h;
        int ct = cot  + huong[i].c;

        if ( outrange(ht,ct) )
            continue;

        sum[ht][ct]++;
    }
}

void solve(){
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
            if ( sum[i][j] == -1 )
                checkxq(i,j);
        }
    }
}

void output(){
    for (int i=0;i<nhang;i++){
        for (int j=0;j<ncot;j++){
            if ( sum[i][j] == -1)
                printf("*");
            else
                printf("%d",sum[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ntest;

    freopen("input.txt","r",stdin);

    scanf("%d",&ntest);
    for (int itest=0;itest<ntest;itest++){
        if ( itest > 0)
            printf("\n");

        input();
        solve();
        output();
    }


    return 0;
}
