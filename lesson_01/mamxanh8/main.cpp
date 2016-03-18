#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    int a, square, cube;

    scanf("%d", &a);

    square = a * a;
    cube = square * a;

    printf("Binh phuong cua %d la: %d\n", a, square);
    printf("Lap phuong cua %d la: %d\n", a, cube);

    getchar();
    return 0;
}
