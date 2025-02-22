#include <stdio.h>
#include <math.h>

int main()
{
	int n,j=1;
	scanf("%d",&n);
	char ch[100][n]={0};
	for(int i=1;i<=n;i++)
	{
		while(scanf("%c",&ch[i][j])!=-1)
		{
			j++;
		}
		j=1;
	}
	for(int i=1;i<=n;i++)
	{
		while(ch[i][j]!=0)
		{
			printf("%c",ch[i][j]);
		}
		printf("\n");
	}
	return 0;
}
