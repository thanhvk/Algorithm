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
    int a, b;

    std:ifstream infile;

    infile.open("labiec11.inp");

    infile >> a;
    infile >> b;

    if ((a > 2) && (b > 2)) {
        // In hinh chu nhat dac
        /*for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                printf("%C%", '*');
            }
            printf("\n");
        }*/

        // In hinh chu nhat rong
        printChars(a, '*');
        printf("\n");

        for (int i = 0; i < b - 2; i++) {
            printf("%C", '*');
            printChars((a - 2 ), ' ');
            printf("%C", '*');
            printf("\n");
        }

        printChars(a, '*');
        printf("\n");
    }

    getchar();
    return 0;
}
