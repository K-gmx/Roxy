#include <stdio.h>

int main()
{
	int a[100]={1,1};
	printf("%d\n%d\n",a[0],a[1]);
	for(int i=2;i<45;i++)
	{
		a[i]=a[i-1]+a[i-2];
		printf("%d\n",a[i]);
	}
	return 0;
}

