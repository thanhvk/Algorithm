#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

bool checInp(int h, int r) {
    int max;
    max = 0;

    for (int i = 0; i < h; i++) {
        max = max + r;
    }

    if (max > 9) {
        return false;
    }

    return true;
}

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
    int h, num, r, count;
    freopen("labiec29.inp", "r", stdin);

    scanf("%d", &h);
    scanf("%d", &r);

    if (checInp(h, r)) {
        for (int i = 0; i < h; i++) {
            if (i == 0) {
                count = 1;
                num = 1;
            } else {
                count = count + 2;
                num = num + r;
            }
            doPrintChar(i, ' ');
            doPrintNum(2*h - count, num);
            doPrintChar(i, ' ');
            printf("\n");
        }
    } else {
        printf("Du lieu nhap vao can dam bao so lon nhat khong vuot qua 9\n");
    }

    getchar();
    return 0;
}
