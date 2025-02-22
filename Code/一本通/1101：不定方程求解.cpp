#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,sum=0,i,j;
	scanf("%d%d%d",&a,&b,&c);
	for(i=0;i<=(c/a);i++)
	{
		for(j=0;j<=(c/b);j++)
		{
			if((i*a+j*b)==c)
			{
				sum+=1;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
