#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <math.h>
#define pb push_back

using namespace std;

int row = 10, col = 10;

void solve() {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            printf("%4d", j*i);
        }
        printf("\n");
    }
}

int main()
{
    solve();

    return 0;
}
