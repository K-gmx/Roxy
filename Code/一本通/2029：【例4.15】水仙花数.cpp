#include <stdio.h>
#include <math.h>

int main()
{
	int n,a,b,c,x,y,count=0;
	scanf("%d%d",&x,&y);
	for(int i=x;i<=y;i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)
		{
			printf("%d ",i);
			count++;
		}
	}
	if(count==0)
	{
		printf("0");
	}
	return 0;
}
