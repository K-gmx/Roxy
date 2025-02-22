#include <stdio.h>

int main()
{
    int n,m,k,sum1=0,sum2=0,count=0,ji=0;
    scanf("%d%d%d",&n,&m,&k);
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
for(int b=1;b<=1000;b++)
{
	for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
    		for(int o=1;o<=m;o++)
    		{
    			sum1+=a[i][o];
			}
			for(int p=1;p<=n;p++)
			{
				sum2+=a[p][j];
			}
			if(a[i][j]>=sum1+sum2)
			{
				ji++;
			}
		}
	}
	if(ji>=k)
	{
		printf("%d",count);
		break;
	}
	else
	{
		for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    		{
    			a[i][j]=a[i][j]-1;
    			sum1=0;
    			sum2=0;
    			ji=0;
			}
		}
		count++;
	}
}
	return 0;
}

