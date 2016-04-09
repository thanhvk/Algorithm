#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct toado{
    int h,c;
    int step;
};

toado huong[5] = { -1,0,0
                  ,0,1,0
                  ,1,0,0
                  ,0,-1,0 };

int nhang,ncot;
int cotxp;
int hangxp = 1;
char s[111][111];
int flag[111][111];

void input(){
    for (int i=0;i<nhang;i++)
        scanf("%s",&s[i]);
}

int getIndex(char c){
    if ( c == 'N')
        return 0;
    if ( c == 'E' )
        return 1;
    if ( c == 'S' )
        return 2;
    return 3;
}

toado doMove(toado prev,int hg){
    toado res;

    res.h = prev.h + huong[hg].h;
    res.c = prev.c + huong[hg].c;
    res.step = prev.step + 1;

    return res;
}

bool raNgoai(toado t){
    if ( t.h < 0 || t.h >= nhang)
        return true;
    if ( t.c < 0 || t.c >= ncot)
        return true;
    return false;
}

void solve(){
    toado current,nextMove;

    current.h = hangxp-1;
    current.c = cotxp-1;
    current.step = 1;
    flag[current.h][current.c] = current.step;

    int loop = 0;
    int ans = 0;

    while (true){
        int h = current.h;
        int c = current.c;
        int hg = getIndex(s[h][c]);
        nextMove = doMove(current,hg);

        if ( raNgoai(nextMove) ){
            ans = nextMove.step - 1;
            break;
        }

        if (flag[nextMove.h][nextMove.c] > 0){
            loop = nextMove.step - flag[nextMove.h][nextMove.c];
            ans = flag[nextMove.h][nextMove.c] - 1;
            break;
        } else {
            flag[nextMove.h][nextMove.c] = nextMove.step;
        }

        current = nextMove;
    }

    if ( loop == 0 ){
        printf("%d step(s) to exit\n",ans);
    } else {
        printf("%d step(s) before a loop of %d step(s)\n",ans,loop);
    }
}

void reset(){
    for (int i=0;i<111;i++)
        for (int j=0;j<111;j++)
            flag[i][j] = 0;
}

int main()
{
    freopen("input.txt","r",stdin);

    while (scanf("%d %d %d",&nhang,&ncot,&cotxp) > 0 ){
        if ( nhang == 0 && ncot == 0 && cotxp == 0 )
            break;
        reset();
        input();
        solve();
    }

    return 0;
}
