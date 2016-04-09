#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int n;
int s[111];
int h1, h2;

void input(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

void binarySearch(int so){
	int l = 0;
	int r = n-1;
	h1 = 0;
	h2 = 0;

	while ( l <= r ){
		int m = ( l+r )/2;

		if ( so == s[m] ) {
            if (m == 0)
                h2 = s[m+1];

            if (m == n-1)
                h1 = s[m-1];

            h1 = s[m-1];
            h2 = s[m+1];
		}

		if ( so > s[m] )
            h1 = s[m];
			l = m+1;

		if (so < s[m]) {
            h2 = s[m];
			r = m-1;
		}
	}

	return;
}

void solve(){
	int m, x;

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        binarySearch(x);

        if (h1 == 0 && h2 != 0) {
            printf("X %d\n", h2);
        }

        if (h1 != 0 && h2 == 0) {
            printf("%d X\n", h1);
        }

        if (h1 !=0 && h2 != 0) {
            printf("%d %d\n", h1, h2);
        }
	}
}

int main()
{
    freopen("10611.inp", "r", stdin);

    input();
    solve();

	return 0;
}

