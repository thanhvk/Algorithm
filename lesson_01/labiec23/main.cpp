#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string>

using namespace std;

int main()
{
    int n, sum;
    string s;

    sum = 0;

    scanf("%d", &n);

    if (n > 0 && n < 10000) {
        std::string s = std::to_string(n);

        for (int i = 0; i < s.length(); i++) {
            printf("%d", std::stoi(s[i]));
            // = sum + std::stoi(s[i]);
        }

        printf("%d", sum);
    }

    getchar();
    return 0;
}
