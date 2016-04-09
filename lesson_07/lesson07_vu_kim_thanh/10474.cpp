#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>

using namespace std;

int n, q, c;
int s[111];

void input(){
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
}

bool cmp(int s1, int s2) {
    if (s1 <= s2)
        return 1;

    return 0;
}

int binarySearch(int so){
	int l = 0;
	int r = n-1;

	while ( l <= r ){
		int m = ( l+r )/2;

		if ( so == s[m] ) {
            return m + 1;
		}

		if ( so > s[m] )
			l = m+1;

		if (so < s[m]) {
			r = m-1;
		}
	}

	return -1;
}

void solve(){
	int x;
    c++;
    printf("CASE# %d:\n", c);

	sort(s, s + n, cmp);

	for (int i = 0; i < q; i++) {
        scanf("%d", &x);

        if (binarySearch(x) != -1)
            printf("%d found at %d\n", x, binarySearch(x));
        else
            printf("%d not found\n", x);
	}
}

int main()
{
    freopen("10474.inp", "r", stdin);

    /*do {
        c++;
        input();
        solve();
    } while (n != 0 || q != 0);*/
    do {
        input();
        if (n == 0 && q == 0)
            return 0;

        solve();
    } while (n != 0 || q != 0);

	return 0;
}

