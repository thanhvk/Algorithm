#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ncurses.h>

using namespace std;

bool checkPrimeNum(int a) {
    if (a < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(a); i++) {
            if ((a % i) == 0) {
                return false;
                break;
            }
        }
    }

    return true;
}

int main()
{
    int a;

    for (int i; i < 5; i++) {
        scanf("%d", &a);

        if (checkPrimeNum(a)) {
            printf("%d la so nguyen to", a);
        } else {
            printf("%d khong phai la so nguyen to", a);
        }
    }
    checkPrimeNum(a);

    getchar();
    return 0;
}
