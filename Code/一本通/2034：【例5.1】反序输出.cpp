#include <stdio.h>

int main()
{
    int n=1,i,a[1000];
    while(scanf("%d",&a[n])!=-1)
	{
        n++;
	}
	for(i=n-1;i>=1;i--)
	{
        printf("%d ",a[i]);
	}
	return 0;
}

