#include <stdio.h>
#include <queue>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	queue<int>q;
	int n,m,i=0;
	scanf("%d%d",&n,&m);
	if(n==0)
	{
		printf("0");
		return 0;
	}
	while(i++<n) q.push(i);
	while(!q.empty())
	{
		for(int i=1;i<=m-1;i++)
		{
			q.push(q.front());
			q.pop();
		}
		printf("%d ",q.front());
		q.pop();
	}
	
	return 0;
}
