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
    int h, count;
    freopen("labiec28.inp", "r", stdin);

    scanf("%d", &h);

    for (int i = 0; i < h; i++) {
        if (i == 0) {
            count = 1;
        } else {
            count = count + 2;
        }
        doPrint(i, ' ');
        doPrint(2*h - count, '*');
        doPrint(i, ' ');
        printf("\n");
    }

    getchar();
    return 0;
}
