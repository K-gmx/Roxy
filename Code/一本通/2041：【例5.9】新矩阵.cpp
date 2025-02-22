#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		a[i][i]+=10;
	}
	for(int i=1;i<=n;i++)
	{
		a[i][n+1-i]+=10;
	}
	if(n%2!=0)
	{
		a[(n+1)/2][(n+1)/2]-=10;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
	/*
	scanf("%",&);
	printf("%",);
	*/
