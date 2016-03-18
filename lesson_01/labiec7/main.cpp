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
    w = 1;

    std::ifstream infile;

    infile.open("labiec7.inp");

    infile >> h;

    for (int i = 1; i <= h; i++) {
        printChars((h - i), ' ');
        printChars(w, '*');
        printChars((h - i), ' ');
        printf("\n");
        w = w + 2;
    }

    getchar();
    return 0;
}
