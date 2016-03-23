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

    freopen("labiec34.inp", "r", stdin);

    scanf("%d", &h);
    scanf("%d", &w);
    scanf("%d", &r);

    n = 1 + r;

    if (w > 2 && h > 1 && r >1) {
        for (int i = 0; i < h; i++) {
            if (i == 1 || i == n) {
                doPrint(w, '*');
                printf("\n");
                n = i + r;
            } else {
                doPrint(1, '*');
                doPrint(w - 2, ' ');
                doPrint(1, '*');
                printf("\n");
            }
        }
    } else {
        printf("Chieu rong lon hon 2 va hai so con lai deu lon hon 1\n");
    }


    getchar();
    return 0;
}
