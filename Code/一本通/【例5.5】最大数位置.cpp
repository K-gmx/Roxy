#include <stdio.h>
int main()
{
	int n,max,f=1;
	scanf("%d",&n);
	int a[n+1];
	scanf("%d",&a[1]);
	max=a[1];
	for(int i=2;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
		{
			max=a[i];
			f=i;
		}
	}
	printf("%d",f);
	return 0;
}
	/*
	scanf("%",&);
	printf("%",);
	*/
