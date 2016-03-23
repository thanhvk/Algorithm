#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void doPrint(int num, char kitu){
    for (int i=0; i<num; i++){
        printf("%c", kitu);
    }
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    
    for (int i=1; i<=(n-1)/2; i++) {
        doPrint(i, '*');
        doPrint(n-2*i, ' ');
        doPrint(2*i-1, '*');
        doPrint((n-2*i+1)/2, ' ');
        printf("\n");
    }
    doPrint((3*n-1)/2, '*');
    printf("\n");
    
    for (int i=1; i<=(n-1)/2; i++) {
        doPrint((n-2*i+1)/2, '*');
        doPrint(2*i-1, ' ');
        doPrint(n-2*i, '*');
        doPrint(i, ' ');
        printf("\n");
    }
    return 0;
}
