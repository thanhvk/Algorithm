#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    float pi, r, s, v;

    pi = 3.14;
    scanf("%f", &r);

    if (r > 0) {
        s = 4 * pi * r * r;
        v = (4/3) * pi * r *r;

        printf("Dien tich hinh cau la: %f\n", s);
        printf("The tich hinh cau la: %f\n", v);
    }

    getchar();
    return 0;
}
