#include <stdio.h>
int main()
{
	int n,m,num=0,cnt=0;
	int y;
	scanf("%d%d",&n,&m);
	y=n;
	int a[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=1)
		{
			num++;
			if(num==m)
			{
				a[i]=1;
				num=0;
				cnt++;
				y--;
				printf("%d ",i);
			}
		}
		if(i==n)
		{
			i=0;
		}
		if(y==0)
		{
			break;
		}
	} 
	
	return 0;
}
	/*
	scanf("%",&);
	printf("%",);
	*/
