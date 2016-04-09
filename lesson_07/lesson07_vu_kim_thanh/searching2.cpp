#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int n;
struct st {
    int val, idx;
};

st s[111];

void input(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].val);
        s[i].idx = i + 1;
    }
}

int binarySearch(int so){
	int l = 0;
	int r = n-1;
	int m;

	while ( l <= r ){
		m = ( l+r )/2;

		if ( so == s[m].val )
			return s[m].idx;

		if ( so > s[m].val )
			l = m+1;
		else
			r = m-1;
	}

	return -1;
}

bool cmp(st s1, st s2) {
    if (s1.val < s2.val)
        return 1;

    if (s1.val > s2.val)
        return 0;

    if (s1.idx < s2.idx)
        return 1;

    return 0;
}

void solve(){
	int m, x;

	scanf("%d", &m);

    sort(s, s + n, cmp);

	for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (i > 0)
            printf(" ");
        printf("%d ", binarySearch(x));
	}

	printf("\n");
}

int main()
{
    int ntest;

    freopen("searching2.inp", "r", stdin);
    scanf("%d", &ntest);

    for (int itest = 0; itest < ntest; itest++) {
        input();
        solve();
    }

	return 0;
}

