#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <map>

#define pb push_back
#define inf 100000000

using namespace std;



int main(){
    freopen("project.inp","r",stdin);
    itest = 0;
    while (scanf("%d %d",&n,&nduong) > 0){
        itest++;
        if ( n == 0 && nduong == 0 )
            break;
        input();
        solve();
        output();
    }

    return 0;
}
