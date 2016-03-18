#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    int n, sum;
    sum = 0;

    scanf("%d", &n);

    if (n <= 100) {
        for (int i = 1; i <= n; i++) {
            if ((i % 2) != 0) {
                sum = sum + i;
            }
        }

        printf("%d\n", sum);
    }

    getchar();
    return 0;
}

