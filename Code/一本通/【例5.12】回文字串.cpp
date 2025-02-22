#include <stdio.h>
#include <math.h>

int main()
{
	int i,n=0;
	char a[101],ch2[101];
	for(int i=1;;i++)
	{
		scanf("%c",&a[i]);
		n++;
		if(a[i]=='.')
		{
			n--;
			break;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=a[n-i+1])
		{
			printf("No");
			break;
		}
	}
	if(i>n)
	{
		printf("Yes");
	}
	return 0;
}

