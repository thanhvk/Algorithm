#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    int n, m, temp, c;

    printf("Ban muon nhap day co bao nhieu so?\n");
    scanf("%d", &n);
    printf("Bat dau:\n");

    if (n > 0 && n < 100) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &temp);

            if (i == 0) {
                m = temp;
                c = 1;
            }

            if (i > 0 && m == temp) {
                c++;
            }

            if (m > temp) {
                m = temp;
                c = 1;
            }
        }
    }

    printf("%d %d", m, c);

    getchar();
    return 0;
}
