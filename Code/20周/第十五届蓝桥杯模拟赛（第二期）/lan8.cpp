#include <stdio.h>
#include <string.h>
#define N 10005
int turn(char a[20]);
int main()
{
	char a[20]={0};
	char ch;
	scanf("%s",a);
	int len=strlen(a);
	if(len>1)turn(a);
	else printf("%s",a);
	return 0;
}

int turn(char a[20]){
	
	int len=strlen(a);
	long long sum=1,k=0,l=0;
	char f[20]={'0'},z[20]={'0'};
	if(len<=1)
	{
		return 0;
	}
	else
	{
		for(int i=0;i<=len-1;i++)
		{
			if(a[i]!='0')
			{
				sum=sum*(a[i]-'0');
			}
		}
		while(sum!=0)
		{
			f[k++]=sum%10+'0';
			sum/=10;
		}
		for(int i=k-1;i>=0;i--)
		{
			z[l++]=f[i];
		}
		z[l]='\0';
		printf("%s\n",z);
		turn(z);
	}
	return 1;
}

