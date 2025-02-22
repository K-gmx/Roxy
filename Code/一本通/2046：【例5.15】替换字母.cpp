#include <stdio.h>
#include <math.h>

int main()
{
	int i=1;
	char a[301],x,y;
	while(scanf("%c",&a[i])!=-1)
	{
		if(a[i]=='\n')break;
		i++;
	}
	scanf("\n%c ",&x);
	scanf("%c",&y);
	for(int j=1;j<=i;j++)
	{
		if(a[j]==x)
		{
			a[j]=y;
		}
	}
	for(int j=1;j<=i;j++)
	{
		printf("%c",a[j]);
	}
	return 0;
}
