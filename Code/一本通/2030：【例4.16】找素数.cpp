#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		for(int j=2;j<i;j++)
		{
			if((i%j)==0)
			{
				sum++;
			}
		}
		if(sum==0)
		{
			printf("%d\n",i);
		}
		sum=0;
	}
	return 0;
}
