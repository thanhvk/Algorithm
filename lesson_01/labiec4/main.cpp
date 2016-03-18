#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

using namespace std;

int main()
{
    int input;

    std::ifstream infile;

    infile.open("labiec4.inp");

    infile >> input;

    while(!infile.eof()) {
        printf("%d ", input);
        infile >> input;
        if ((input % 10) == 0) {
            break;
        }
    }

    getchar();
    return 0;
}
