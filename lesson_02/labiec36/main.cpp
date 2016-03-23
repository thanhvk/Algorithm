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
    int n, w;

    freopen("labiec36.inp", "r", stdin);

    scanf("%d", &n);
    scanf("%d", &w);

    if (n > 0 && w > 2) {
        if (n == 1) {
            for (int i = 0; i < w; i++) {
                if (i == 0 || i == (w-1)) {
                    doPrint(w, '*');
                    printf("\n");
                } else {
                    doPrint(w-(i+1), ' ');
                    doPrint(1, '*');
                    printf("\n");
                }
            }
        } else {
            int r, j;
            r = w - 1;

            for (int i = 0; i < n*w -1; i++) {
                if (i == 0 || i == r) {
                    doPrint(w, '*');
                    printf("\n");
                    r = i + (w - 1);
                    j = 1;
                } else {
                    doPrint(w-(j+1), ' ');
                    doPrint(1, '*');
                    printf("\n");
                    j++;
                }
            }
        }
    }

    getchar();
    return 0;
}
