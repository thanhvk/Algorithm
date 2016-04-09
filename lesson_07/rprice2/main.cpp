#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int n, k;
int s[111];

void input(){
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

int binarySearch(int so, int k){
	int l = 0;
	int r = n-1;
	int res = -1;

	while ( l <= r ){
		int m = ( l+r )/2;

		if ( so == s[m] ) {
            res = m + 1;
			return res;
		}

		if ( so > s[m] ) {
            if (so - k < s[m]) {
                res = m+1;
                l = m+1;
            } else {
                l = m + 1;
            }
		}

		if (so < s[m]) {
			r = m-1;
		}
	}

	return res;
}

void solve(){
	int m, x;

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (i > 0)
            printf(" ");
        printf("%d", binarySearch(x, k));
	}

	printf("\n");
}

int main()
{
    int ntest;

    freopen("rprice2.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

	return 0;
}

