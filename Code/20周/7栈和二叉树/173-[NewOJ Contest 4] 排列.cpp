#include <math.h>
#include <stdio.h>
#include <stack>
#include <bits/stdc++.h>
#define N 300008
using namespace std;
int main()
{
	stack<int>st;
	int a[N]={0};
	long long ans=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(!st.empty() && a[st.top()]<a[i])
		{
			st.pop();
			if(!st.empty())
			{
				ans+=(i-st.top()+1);
			}
		}
		st.push(i);
	}
	ans+=(n-1)*2; 
	cout<<ans;
	return 0;
}

