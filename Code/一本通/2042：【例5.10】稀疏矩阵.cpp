#include <stdio.h>
#include <math.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n+1][m+1]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%d %d %d\n",i,j,a[i][j]);
			}
		}
	}
	return 0;
}
	/*
	scanf("%",&);
	printf("%",);
	*/
