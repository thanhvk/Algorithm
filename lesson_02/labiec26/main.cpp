#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

bool checkSeq(int itest) {
    int a, b;
    bool result;
    result = true;

    for (int j = 0; j < itest; j++) {
        if (j == 0) {
            scanf("%d", &a);
        }
        if (j >= 1) {
            scanf("%d", &b);
            if ((a * b) >= 0) {
                result = false;
            } else {
                a = b;
            }
        }
    }

    return result;
}

int main()
{
    int inp, itest, ntest;
    freopen("labiec26.inp", "r", stdin);

    scanf("%d", &ntest);

    for (int i =  0; i < ntest; i++) {
        scanf("%d", &itest);

        if (itest > 0 && itest < 100) {
            if(checkSeq(itest)) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        } else {
            printf("Kiem tra lai du lieu dau vao\n");
            return 0;
        }
    }

    getchar();
    return 0;
}
