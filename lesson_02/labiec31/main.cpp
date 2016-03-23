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
    int h;
    freopen("labiec31.inp", "r", stdin);

    scanf("%d", &h);

    if (h > 0 && h%2 != 0) {
        for (int i = 0; i < h/2; i++) {
            doPrint(i, ' ');
            doPrint(1, '$');
            doPrint((h - 2*(i+1)), ' ');
            doPrint(1, '*');
            doPrint(i, ' ');
            printf("\n");
        }

        doPrint((h/2), ' ');
        doPrint(1, '$');
        doPrint((h/2), ' ');
        printf("\n");

        for (int i = h/2 - 1; i >= 0; i--) {
            doPrint(i, ' ');
            doPrint(1, '*');
            doPrint((h - 2*(i+1)), ' ');
            doPrint(1, '$');
            doPrint(i, ' ');
            printf("\n");
        }
    } else {
        printf("Chieu cao phai lon hon 0 va la so le\n");
    }

    getchar();
    return 0;
}
