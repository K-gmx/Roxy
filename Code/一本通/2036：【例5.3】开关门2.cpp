#include <stdio.h>
#include <math.h> 

int main()
{
	int n;
	//scanf("%d",&n);
	int a[n]={2};
	for(int i=2;i<=n;i++)
	{
		for(int j=i;j<=i;j+=i)
		{
			a[j]=-a[j];
		}
	}
	for(int k=0;k<=n-1;k++)
	{
		printf("%d ",a[k]);
	}
	
	return 0;
}

