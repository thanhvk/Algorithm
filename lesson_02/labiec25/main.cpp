#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

bool checkArithPro(int itest) {
    int a, b, c;
    bool result;
    result = true;

    for (int j = 0; j < itest; j++) {
        if (j == 0) {
            scanf("%d", &b);
        }
        if (j == 1) {
            scanf("%d", &c);
            a = c-b;
            b = c;
        }
        if (j > 1) {
            scanf("%d", &c);
            if (a != (c - b)) {
                result = false;
            } else {
                b = c;
            }
        }
    }

    return result;
}

int main()
{
    int inp, itest, ntest;
    freopen("labiec25.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int i =  0; i < ntest; i++) {
        scanf("%d", &itest);

        if (itest > 0 && itest < 100) {
            if(checkArithPro(itest)) {
                printf("1\n");
            } else {
                printf("Khong phai cap so cong\n");
            }
        } else {
            printf("Kiem tra lai du lieu dau vao\n");
            return 0;
        }
    }

    getchar();
    return 0;
}
