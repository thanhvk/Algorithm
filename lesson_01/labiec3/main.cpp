#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    int n, temp, sum;
    sum = 0;

    scanf("%d", &n);

    if (n >= 0 && n <= 100) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &temp);
            sum = sum + temp;
        }

        printf("%d\n", sum);
    }

    getchar();
    return 0;
}

