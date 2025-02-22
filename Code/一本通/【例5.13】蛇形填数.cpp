#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1][n+1]={0};
	int cnt=1,sum=1,f=0;
	for(int i=1;i<=n*n;i++)
	{
		switch(cnt)
		{
			case 1:
				{
					cnt++;
					for(int j=1+f;j<=n-1-f;j++)
					{
						a[j][n-f]=sum;
						sum++;if(sum>n*n){break;}
					}//printf("1\n");
					break;
				}
			case 2:
				{
					cnt++;
					for(int j=n-1-f;j>=1+f;j--)
					{
						a[n-f][j+1]=sum;
						sum++;if(sum>n*n){break;}
					}//printf("2\n");
					break;
				}
			case 3:
				{
					cnt++;
					for(int j=n-1-f;j>=1+f;j--)
					{
						a[j+1][f+1]=sum;
						sum++;if(sum>n*n){break;}
					}//printf("3\n");
					break;
				}
			case 4:
				{
					cnt++;
					for(int j=1+f;j<=n-1-f;j++)
					{
						a[f+1][j]=sum;
						sum++;if(sum>n*n){break;}
					}//printf("4\n");
					break;
				}
		}
		if(cnt==5)
		{
			f++;
			cnt=1;
			//printf("F\n");
		}
		if(sum>n*n){break;}
	}
	if(n%2!=0)
	{
		a[(n+1)/2][(n+1)/2]=n*n;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	//printf("%d",sum);
	return 0;
}
	/*
	scanf("%",&);
	printf("%",);
	*/
	
	
	
