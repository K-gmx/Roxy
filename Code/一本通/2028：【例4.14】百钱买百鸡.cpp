#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	for(int i=0;i<=19;i++)//5
	{
		for(int j=0;j<=31;j++)//3
		{
			n=(100-i*5-j*3)*3;//1:3
			if(n>=0&&n+i+j==100)
			{
				printf("%d %d %d\n",i,j,n);
			}
		}
	}
	return 0;
}
