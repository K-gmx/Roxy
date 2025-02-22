#include <stdio.h>
#include <math.h>

int main()
{
	int n,a;
	double e=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a*=j;
		}
		e+=1.0/a;
		a=1;
	}
	printf("%.10f",e);
	return 0;
}
