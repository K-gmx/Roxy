#include <stdio.h>
#include <math.h>

int findifsushu(int a);

int main()
{
	int n,a,flag=0,j,flag2=0;
	for(int i=6;i<=100;i+=2)
	{
		for(j=2;j<=i/2;j++)
		{
		flag=findifsushu(j);
		flag2=findifsushu(i-j);
		if(flag==1&&flag2==1)
		{
			printf("%d=%d+%d\n",i,j,i-j);
			break;
		}
		flag=0;
		flag2=0;
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
