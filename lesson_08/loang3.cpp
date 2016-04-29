#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int n,nduong;
bool flag[111][111];
int q[111];
int d[111];
int lev[111];
int maxlen;
vector<int> vect;

void input(){
	int a,b;
	
	scanf("%d %d",&n,&nduong);
	
	// reset mang danh dau duong
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			flag[i][j] = 0;
	
	for (int i=0;i<nduong;i++){
		scanf("%d %d",&a,&b);
		
		// danh dau duong 2 chieu a --> b va b --> a
		flag[a][b] = 1;
		flag[b][a] = 1;
	}
}

void loang(int lang){
	int dau = -1;
	int cuoi = 0;
	
	// khoi tri queue
	q[0] = lang;
	
	lev[0] = 0;
	// level = so duong ngan nhat de di tu lang a ( lang nhap vao ) den lang b ( lang push vao queue )
	// tat nhien neu no tu di den chinh no thi ko ton con duong nao
	
	// cong so lan loang qua lang them 1 don vi	
	d[lang]++;
	
	while ( dau < cuoi ){	// khi queue van con trang thai chua xet
		dau++;
		int cur = q[dau];
		
		for (int next = 1;next <=n; next++){
			// check dieu kien de lang lien thong va lang nay chua di qua bao h
			if ( next != cur && d[next] != d[cur] && flag[cur][next] == 1 ){
				// danh dau va them lang vao queue
				d[next] = d[cur];	// danh dau = so lan di qua vung nay
				cuoi++;
				q[cuoi] = next;
				lev[cuoi] = lev[dau] + 1; // level sau = level truoc + 1
			}
		}
	}
	
	if ( d[lang] == 1 ) {	 // neu di qua lang lan dau tien
		vect.push_back(cuoi+1);
	}
	
	// check khoang cach tu lang nhap vao den lang xa nhat
	maxlen = max(maxlen,lev[cuoi]);
}

void solve(){
	vect.clear();
	maxlen = 0;
	
	// reset mang danh dau vung
	// mang d kieu int luu so lan loang lang i
	for (int i=1;i<=n;i++)
		d[i] = 0;
		
	for (int i=1;i<=n;i++){
		// loang tat ca cac lang
		// neu vung nay chua bao h di qua 1 lan (d[i] == 1 ) thi dua size cua queue vao ket qua
		// check khoang cach cua lang i den lang xa nhat
		loang(i);
	}
	
	// sort tang dan
	sort(vect.begin(),vect.end());
	// dao nguoc vecter --> sort giam dan
	reverse(vect.begin(),vect.end());
}

void output(){
	printf("%d",vect.size());
	
	for (int i=0;i<vect.size();i++)
		printf(" %d",vect[i]);
	printf(" %d",maxlen);
	printf("\n");	
}

int main()
{
	freopen("loang3.inp","r",stdin);
	
	int ntest;
	scanf("%d",&ntest);
	
	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
		output();
	}
	
	return 0;
}

