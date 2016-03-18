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
    infile.open("mamxanh4.inp");

    infile >> input;

    printf("So thu nhat o file la: %d\n", input);

    infile >> input;

    printf("So thu hai o file la: %d\n", input);

    /* In 2 lan so cuoi cung ???
    while(!infile.eof())
    {
        infile >> input;

        printf("%d\n", input);
    }*/

    infile.close();

    getchar();
    return 0;
}
