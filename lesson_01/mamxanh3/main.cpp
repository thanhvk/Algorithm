#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h> // tuong duong conio.h trong win

using namespace std;

int main()
{
    int input;

    std::ifstream infile;
    infile.open("mamxanh3.inp");

    infile >> input;

    printf("So o file la: %d\n", input);

    infile.close();

    //std::cout << input;

    //std::cout << std::endl; // in dong moi

    getchar();
    return 0;
}
