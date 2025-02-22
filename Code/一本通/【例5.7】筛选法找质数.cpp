#include <stdio.h>
#include <math.h>

int findifsushu(int a);

int main()
{
	int n,flag=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		flag=findifsushu(i);
		if(flag==1)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}

int findifsushu(int a)
{
	int flag,i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			break;
		}
	}
	if(i<a)
	{
		flag=0;
	}
	else
	{
		flag=1;
	}
	return flag;
}
