#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    int r;
    float Pi, s;

    Pi = 3.14;

    scanf("%d", &r);

    if (r > 0) {
        s = Pi * r * r;
        printf("Dien tich hinh tron co ban kinh %d la: %f", r, s);
    }

    getchar();
    return 0;
}
