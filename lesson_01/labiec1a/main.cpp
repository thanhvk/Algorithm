#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a>= 0 && a <= b && b <= 100) {
        for (int i = a; i <= b; i++) {
            printf("%d\n", i);
        }
    }

    getchar();
    return 0;
}

