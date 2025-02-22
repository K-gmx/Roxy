#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double sum=0,H;
	scanf("%lf%d",&H,&n);
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			sum+=H;
		}
		else
		{
			sum+=H;
			H/=2;
		}
	}
	H/=2;
	printf("%.2f %.2f",sum,H);
	return 0;
}
