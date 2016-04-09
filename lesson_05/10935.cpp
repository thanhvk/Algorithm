#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <vector>

#define pb push_back

using namespace std;

int n;

void solve(){
	vector<int> vect;
	queue<int> q;
	int temp;
	
	for (int i=1;i<=n;i++)
		q.push(i);
	
	while (q.size() > 1){
		// lay quan bai dau tien roi vut di
		temp = q.front();
		q.pop();
		vect.pb(temp);
		
		// lay quan bai tiep theo roi cho xuong cuoi
		temp = q.front();
		q.pop();
		q.push(temp);		
	}
	
	printf("Discarded cards:");
	for (int i=0;i<vect.size();i++){
		if ( i == 0 )
			printf(" ");
		else
			printf(", ");
		printf("%d",vect[i]);
	}
	printf("\n");
	
	printf("Remaining card: %d\n",q.front());
}

int main()
{
	freopen("10935.inp","r",stdin);
	
	while (scanf("%d",&n) > 0 ){
		if ( n == 0 )
			break;
		
		solve();
	}
	
	return 0;
}


