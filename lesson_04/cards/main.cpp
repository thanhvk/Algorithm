#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <math.h>

using namespace std;

stack <char> s;
char str[111];

void solve(){
    scanf("%d", &str);
	int len = strlen(str);
	char temp;

	for (int i = 0; i < len; i++)
        if (str[i] == '(' || str[i] == '[') {
            s.push(str[i]);
        }
        if (str[i] == ')' || str[i] == ']') {
            s.top();
        }
}

int main()
{
	int ntest;

	freopen("input.txt","r",stdin);

	scanf("%d",&ntest);

	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
	}

	return 0;
}

