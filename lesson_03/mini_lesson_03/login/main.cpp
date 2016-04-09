#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>
#include <vector>
#include <map>

#define pb push_back

using namespace std;

int main()
{
    freopen("login.inp", "r", stdin);

    int n, m;
    scanf("%d", &n);
    char id[111], pass[111];
    char idTest[111], passTest[111];

    map<string, string> myMap;
    map<string, string> myCom;

    for (int i = 0; i < n ; i++) {
        scanf("%s %s", &id, &pass);
        myMap[id] = pass;
    }

    scanf("%d", &m);
    for (int i = 0; i < m ; i++) {
        scanf("%s %s", &idTest, &passTest);
        if (myMap[idTest] == passTest) {
            printf("%d\n", 1);
        } else {
            printf("%d\n", 0);
        }
    }

    getchar();
    return 0;
}
