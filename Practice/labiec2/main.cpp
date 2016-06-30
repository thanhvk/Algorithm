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
int n;

int main()
{
    int sum = 0;

    freopen("labiec2.inp", "r", stdin);
    scanf("%d", &n);

    for (int i=1; i <= n; i++) {
        if (i%2 != 0)
            sum += i;
    }

    printf("%d\n", sum);
    return 0;
}
