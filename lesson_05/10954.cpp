#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>

#define fi "10954.inp"
#define fo "10954.out"
#define ll long long

using namespace std;

class ss
{
	public:
		bool operator() (ll s1,ll s2)
		{
			return s1 > s2;
		}
};

priority_queue<ll, vector<ll>, ss> pq;
int n;

void input()
{
	int i;
	ll so;
	
	while (!pq.empty())
		pq.pop();
	
	for (i=0;i<n;i++)
	{
		scanf("%lld",&so);
		pq.push(so);
	}
}

void solve()
{
	ll kq;
	ll a,b;
	
	kq = 0;
	
	while (pq.size() > 1)
	{
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		
		a = a+b;
		kq += a;
		
		pq.push(a);
	}
	
	printf("%lld\n",kq);
}

int main()
{
	freopen(fi,"r",stdin);
	freopen(fo,"w",stdout);
	
	while (scanf("%d",&n) && n )
	{
		input();
		solve();
	}
	
	return 0;
}

