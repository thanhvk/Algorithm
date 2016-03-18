#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

void printChars(int n, char kitu) {
    for (int i = 0; i < n; i++) {
        printf("%C", kitu);
    }
}

int main()
{
    int h, w;
    w = 3;

    scanf("%d", &h);

    if (h > 2) {
        printChars((h - 1), ' ');
        printChars(1, '*');
        printChars((h - 1), ' ');
        printf("\n");

        for (int i = 2; i <= (h-1); i++) {
            printChars((h - i), ' ');
            printChars(1, '*');
            printChars((w - 2), ' ');
            printChars(1, '*');
            printChars((h - i), ' ');
            printf("\n");
            w = w + 2;
        }

        printChars(2*h - 1, '*');
        printf("\n");
    }

    getchar();
    return 0;
}
