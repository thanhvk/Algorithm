#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

void doPrintChar(int n, char sChar) {
    for (int i = 0; i < n; i++) {
        printf("%C", sChar);
    }
}

void doPrintNum(int n, int num) {
    for (int i = 0; i < n; i++) {
        printf("%d", num);
    }
}

int main()
{
    int h;
    freopen("labiec32.inp", "r", stdin);

    scanf("%d", &h);

    if (h > 0 && h < 10 && h%2 != 0) {
        for (int i = 0; i < h/2; i++) {
            doPrintChar(i, ' ');
            doPrintNum(1, (h-i));
            doPrintChar((h - 2*(i+1)), ' ');
            doPrintNum(1, (h-i));
            doPrintChar(i, ' ');
            printf("\n");
        }

        doPrintChar((h/2), ' ');
        doPrintNum(1, (h-h/2));
        doPrintChar((h/2), ' ');
        printf("\n");

        for (int i = h/2 - 1; i >= 0; i--) {
            doPrintChar(i, ' ');
            doPrintNum(1, (i+1));
            doPrintChar((h - 2*(i+1)), ' ');
            doPrintNum(1, (i+1));
            doPrintChar(i, ' ');
            printf("\n");
        }
    } else {
        printf("Chieu cao phai lon hon 0 va la so le nho hon 10\n");
    }

    getchar();
    return 0;
}
