#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1][n+1]={0};
	for(int i=1;i<=n;i++)
	{
		a[i][1]=1;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=n;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			if(a[i][j]!=0)
			{
				//printf("%d ",a[i][j]);
			}
		}
		//printf("\n");
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

