#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct toado {
    int h, c;
    char name;
};

char maze[111][111];
char temp[111], c[111];
char space;
toado init;
int nhang, ncot;

toado huong[5] = {-1, 0, 'N'
                  , 0, 1, 'E'
                  , 1, 0, 'S'
                  , 0, -1, 'W'};

void input() {
    scanf("%d %d", &nhang, &ncot);
    scanf("%c", &space);

    for (int i = 0; i < nhang; i++) {
        gets(temp);
        for (int j = 0; j < ncot; j++) {
            maze[i][j] = temp[j];
        }
    }

    scanf("%d", &init.h);
    scanf("%d", &init.c);
    init.name = 'N';

    printf("%d %d %c\n", init.h, init.c, init.name);

    char lastChar;
    while (lastChar != 'Q') {
        int index = strlen(c);

        memset(temp, 0, strlen(temp));
        scanf("%s", &temp );

        for (int j = 0; j < strlen(temp); j++) {
            c[index] = temp[j];
            index++;
        }

        lastChar = temp[strlen(temp) - 1];
    }
}

int getIndexFromChar(char c, int hg) {
    if (c == 'R') {
        return (hg + 1) % 4;
    }

    return (hg + 3) % 4;
}

toado doMove(toado loc, int hg) {

    if ((maze[loc.h + huong[hg].h][loc.c + huong[hg].c]) == ' '
        && (loc.h + huong[hg].h) < nhang
        && (loc.c + huong[hg].c) < ncot) {

        loc.h = loc.h + huong[hg].h;
        loc.c = loc.c + huong[hg].c;
        loc.name = huong[hg].name;
    } else {
        return loc;
    }

    return loc;
}

toado solve() {
    int len = strlen(c);
    int hg = 0;
    toado loc;
    loc.h = init.h - 1;
    loc.c = init.c - 1;
    loc.name = init.name;

    for (int i = 0; i < len; i++) {
        if (c[i] == 'R' || c[i] == 'L') {
            hg = getIndexFromChar(c[i], hg);
        }
        if (c[i] == 'F') {
            loc = doMove(loc, hg);
        }
        if (c[i] == 'Q') {
            break;
        }
     }

     printf("%d %d %c\n", loc.h + 1, loc.c + 1, huong[hg].name);
}

int main()
{
    int ntest;

    freopen("maze.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

    return 0;
}
