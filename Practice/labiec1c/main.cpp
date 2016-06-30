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
int a, b;

int main()
{
    freopen("labiec1c.inp", "r", stdin);
    scanf("%d %d", &a, &b);

    for (int i=a; i<=b; i++) {
        if (i%2 == 0)
            printf("%d\n", i);
    }

    return 0;
}
