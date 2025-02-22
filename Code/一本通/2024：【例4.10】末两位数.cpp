#include <stdio.h>
#include <math.h>

int main()
{
	int i,n,a=1992;
	scanf("%d",&n);
	if(n==0)
	{
		printf("1");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			a=a*1992;
			a=a%10000;
		}
	}
	printf("%d",a%100);
	return 0;
}
