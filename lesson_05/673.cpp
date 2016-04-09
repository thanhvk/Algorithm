#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stack>

using namespace std;

char s[222];	// de bai gioi han string length = 128

bool solve(){
	stack<int> st;
	
	int len = strlen(s);
	for (int i=0;i<len;i++){
		if ( s[i] == ']' ){
			if ( st.size() == 0 )
				return 0;
			char temp = st.top();
			st.pop();
			
			if ( temp != '[' )
				return 0;
		} else if ( s[i] == ')' ){
			if ( st.size() == 0 )
				return 0;
			char temp = st.top();
			st.pop();
			
			if ( temp != '(' )
				return 0;	
		} else {
			st.push(s[i]);
		}
	}
	
	if ( st.size() == 0 )
		return 1;
	return 0;
}

int main()
{
	freopen("673.inp","r",stdin);
	
	int n;
	scanf("%d\n",&n);
	for (int i=0;i<n;i++){
		gets(s);	// vi de bai co string rong
		if ( solve() )
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	return 0;
}


