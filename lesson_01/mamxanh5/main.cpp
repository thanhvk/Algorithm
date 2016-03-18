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

    scanf("%d", &a);
    scanf("%d", &b);

    printf("Tong hai so la: %d", a + b);

    getchar();
    return 0;
}
