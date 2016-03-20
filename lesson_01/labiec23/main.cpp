#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int main()
{
    int n, sum;

    sum = 0;

    scanf("%d", &n);

    if (n > 0 && n < 10000) {
        while(n%10 > 0) {
            sum = sum + n%10;
        }

        printf("%d\n", sum);
    }

    getchar();
    return 0;
}
