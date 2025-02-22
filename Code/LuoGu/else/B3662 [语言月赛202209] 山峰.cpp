#include <stdio.h>

int main()
{
	int n,m,t,temp,count=1;
	int a1,a2,b1,b2;
	scanf("%d%d",&n,&m);
	int a[n+1][m+1],b[1000000][2]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		temp=a[a1][a2];
		a[a1][a2]=a[b1][b2];
		a[b1][b2]=temp;
	}
	if(n==1&&m==1)
	{
		printf("1\n1 1");
	}
	else if(n==1)
	{
		for(int j=1;j<=m;j++)
		{
			if(j==1)
			{
				if(a[1][1]>a[1][2])
				{
					b[count][1]=1;
					b[count][2]=1;
					count++;
				}
			}
			else if(j==m)
			{
				if(a[1][j]>a[1][j-1])
				{
					b[count][1]=1;
					b[count][2]=j;
					count++;
				}
			}
			else if((a[1][j]>a[1][j+1])&&a[1][j]>a[1][j-1])
			{
				b[count][1]=1;
				b[count][2]=j;
				count++;
			}
			//printf("%d ",a[i][j]);
		}
	}
	else if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(i==1)
			{
				if(a[1][1]>a[2][1])
				{
					b[count][1]=1;
					b[count][2]=1;
					count++;
				}
			}
			else if(i==n)
			{
				if(a[i][1]>a[i-1][1])
				{
					b[count][1]=i;
					b[count][2]=1;
					count++;
				}
			}
			else if((a[i][1]>a[i+1][1])&&a[i][1]>a[i-1][1])
			{
				b[count][1]=i;
				b[count][2]=1;
				count++;
			}
			//printf("%d ",a[i][j]);
		}
	}
	else{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1&&j==1)
			{
				if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1])
				{
					b[count][1]=i;
					b[count][2]=j;
					count++;
				}
			}
			else if(i==n&&j==m)
			{
				if(a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1])
				{
					b[count][1]=i;
					b[count][2]=j;
					count++;
				}
			}
			else if(i==1&&j==m)//up right->
			{
				if(a[i][j]>a[i][j-1]&&a[i][j]>a[i+1][j])
				{
					b[count][1]=i;
					b[count][2]=j;
					count++;
				}
			}
			else if(i==n&&j==1)//down left<-
			{
				if((a[i][j]>a[i-1][j])&&(a[i][j]>a[i][j+1]))
				{
					b[count][1]=i;
					b[count][2]=j;
					count++;
				}
			}
			else if((a[i][j]>a[i-1][j])&&a[i][j]>a[i][j+1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1])
			{
				b[count][1]=i;
				b[count][2]=j;
				count++;
			}
			//printf("%d ",a[i][j]);
		}
	}}
if(count!=1)
{
	printf("%d\n",count-1);
	for(int i=1;i<=count-1;i++)
	{
		printf("%d %d\n",b[i][1],b[i][2]);
	}
}
else
{
	printf("0");
}
	return 0;
}

