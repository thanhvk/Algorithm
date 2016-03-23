#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

void doPrint(int n, char sChar) {
    for (int i = 0; i < n; i++) {
        printf("%C", sChar);
    }
}

int main()
{
    int h, w, r, n;

    freopen("labiec35.inp", "r", stdin);

    scanf("%d", &h);
    scanf("%d", &w);
    scanf("%d", &r);

    n = r;

    if (w > 1 && h > 1 && r >1) {
        for (int i = 0; i < h -1 ; i++) {
            for (int j = 0; j < w; j++) {
                if (j == 0 || j == n) {
                    doPrint(1, '*');
                    n = j + r;
                } else {
                    doPrint(1, ' ');
                }
            }
            printf("\n");
        }

        doPrint(w, '*');
    } else {
        printf("Tat ca cac so deu lon hon 1\n");
    }


    getchar();
    return 0;
}
