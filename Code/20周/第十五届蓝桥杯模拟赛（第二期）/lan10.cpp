#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
#define N 100010
using namespace std;
int a[N]={0};
int main()
{
	int k,n,flag=1;
	int sum=0,max=0;
	scanf("%d%d",&n,&k);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	//int *p=a,*q=(a+k-1);
	for(int i=0;i<=n-k;i++)
	{
		if(flag==1)
		{
			for(int j=0;j<=k-1;j++)
			{
				sum+=a[j];
			}
			max=sum;
			flag=0;
		}
		else
		{
			sum-=a[i-1];
			sum+=a[i+k-1];
		}
		if(max<sum)
		{
			max=sum;
		}
	}
	printf("%d",max);
	return 0;
}

