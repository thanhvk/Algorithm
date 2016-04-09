#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int n;
int s[111];

void input(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

int binarySearch(int so){
	int l = 0;
	int r = n-1;
	int m;

	while ( l <= r ){
		m = ( l+r )/2;

		if ( so == s[m] )
			return m + 1;

		if ( so > s[m] )
			l = m+1;
		else
			r = m-1;
	}

	return -1;
}

void solve(){
	int m, x;

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (i > 0)
            printf(" ");
        printf("%d", binarySearch(x));
	}

	printf("\n");
}

int main()
{
    int ntest;

    freopen("searching1.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

	return 0;
}

