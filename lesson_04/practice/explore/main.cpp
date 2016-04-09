#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

char str[111];

void input() {
    scanf("%s", str);
}

void output() {
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        printf("%c ", str[i]);

    printf("\n");
}

int main()
{
    int ntest;

    freopen("explore.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        output();
    }

    return 0;
}
