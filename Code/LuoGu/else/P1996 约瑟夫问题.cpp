#include <stdio.h>
#include <string.h>
#define N 100000

int main(){
	
	int n,m;
	int head=1,tail=0;
	int a[N];
	scanf("%d%d",&n,&m);
	if(n==0)
	{
		printf("0");
		return 0;
	}
	while(tail<n)a[++tail]=tail;
	while(tail-head>=0)
	{
		for(int i=1;i<=m-1;i++)
		{
			a[++tail]=a[head++];
		}
		printf("%d ",a[head]);
		head++;
	}
	
	
	return 0;
}
