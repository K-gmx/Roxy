#include <stdio.h>
#include <stdlib.h>

int check4(int a[4][4]){
		for(int i=1;i<=2;i++)
		{
			for(int j=1;j<=2;j++)
			{
				for(int k=1;k<=2;k++)
				{
					if(a[1][i]==a[2][j]&&a[1][i]==a[3][k])
					{
						printf("4\n");
						return 1;
					}
				}
			}
		}
		for(int i=1;i<=2;i++)//a[1][i]
		{
			for(int j=1;j<=2;j++)//a[2][j]
			{
				for(int k=1;k<=2;k++)//a[3][k]
				{
					if(a[1][i]==a[2][j]+a[3][k])
					{
						int x=j;
						int y=k;
						if(x==1)x=2;
						else x=1;
						if(y==1)y=2;
						else y=1;
						if(a[2][x]==a[3][y])
						{
							printf("4\n");
							return 1;
						}
					}
					if(a[2][j]==a[1][i]+a[3][k])
					{
						int x=i;
						int y=k;
						if(x==1)x=2;
						else x=1;
						if(y==1)y=2;
						else y=1;
						if(a[1][x]==a[3][y])
						{
								printf("4\n");
						return 1;
						}
					}
					if(a[3][k]==a[2][j]+a[1][i])
					{
						int x=j;
						int y=i;
						if(x==1)x=2;
						else x=1;
						if(y==1)y=2;
						else y=1;
						if(a[2][x]==a[1][y])
						{
							printf("4\n");
							return 1;
						}
					}
				}
			}
		}
		return 0;
	}
int check6(int a[4][4])
{
	for(int i=1;i<=2;i++)//a[1][i]
		{
			for(int j=1;j<=2;j++)//a[2][j]
			{
				for(int k=1;k<=2;k++)//a[3][k]
				{
					if(a[1][i]==a[2][j]+a[3][k])
					{
						printf("6\n");
						return 1;
					}
					if(a[2][j]==a[1][i]+a[3][k])
					{
						printf("6\n");
						return 1;
					}
					if(a[3][k]==a[2][j]+a[1][i])
					{
						printf("6\n");
						return 1;
					}
				}
			}
		}
		return 0;
	
}
int main()
{
	int n;	int a[4][4];
	scanf("%d",&n);
	for(int q=1;q<=n;q++)
	{
	
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=2;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int flag=check4(a);
		if(flag==0)flag=check6(a);
		if(flag==0)printf("8\n");
	}
	
	
	return 0;
}
