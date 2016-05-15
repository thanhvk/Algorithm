#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>

#define inf 1000000000

using namespace std;

void input(){
    scanf("%d %d %d %d", &n, &m, &bt, &kt);

    memset(s, 0, sizeof(s));

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b, &l);

        s[a][b] = l;
        s[b][a] = l;
    }
}

int timmin() {
    int minn = inf;
    int res = -1;

    for (int i = 0; i < n; i++) {
        if (d[i] == 1)
            continue;

        if (b[i] < minn) {
            minn = b[i];
            res = i;
        }
    }

    return res;
}

void solve() {
    for (int i = 0; i < n; i++) {
        b[i] = inf;
        d[i] = 0;
        pre[i] = -1;
    }

    b[bd] = 0;

    while(d[kt] == 0) {
        int idx = timmin();

        if (idx == -1)
            break;

        d[idx] = 1;
        suanhan(idx);
    }
}

void induong(int idx){
	if ( idx == -1 )
		return;
	induong(pre[idx]);
	printf("%d ",idx);
}

void output(){
	printf("%d\n",b[kt]);
	induong(kt);
	printf("\n");
}

int main()
{
	freopen("10986.inp","r",stdin);

	int ntest;
	scanf("%d",&ntest);

	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
		output();
	}

	return 0;
}

