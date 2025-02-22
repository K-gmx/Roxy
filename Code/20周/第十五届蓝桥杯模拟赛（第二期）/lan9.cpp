#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
#define N 1001
using namespace std;
void dfs(int n,int m,int r,int c);
int check(int n,int m,int w,int b,int i,int j); 
int a[N][N]={0};
int b[N][N]={0};
long long count1=1;
int main()
{
	int n,m;
	int r,c;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&r,&c);
	b[r][c]=1;
	dfs(n,m,r,c);
	printf("%lld",count1);
	return 0;
}

void dfs(int n,int m,int r,int c){
	
	if(check(n,m,a[r][c],a[r+1][c],r+1,c)&&b[r+1][c]!=1)
	{
		b[r+1][c]=1;
		count1++;
		dfs(n,m,r+1,c);
	}
	if(check(n,m,a[r][c],a[r-1][c],r-1,c)&&b[r-1][c]!=1)
	{
		b[r-1][c]=1;
		count1++;
		dfs(n,m,r-1,c);
	}
	if(check(n,m,a[r][c],a[r][c+1],r,c+1)&&b[r][c+1]!=1)
	{
		b[r][c+1]=1;
		count1++;
		dfs(n,m,r,c+1);
	}
	if(check(n,m,a[r][c],a[r][c-1],r,c-1)&&b[r][c-1]!=1)
	{
		b[r][c-1]=1;
		count1++;
		dfs(n,m,r,c-1);
	}
}

int check(int n,int m,int w,int b,int i,int j){
	
	int t;
	if(b>w)
	{
		t=w;
		w=b;
		b=t;
	}
	if(i<1||j<1||i>n||j>m)return 0;
	while(b!=0)
	{
		t=w%b;
		w=b;
		b=t;
	}
	if(w==1) return 0;
	else return 1;
	
}

