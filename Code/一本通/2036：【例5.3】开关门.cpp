#include <stdio.h>
#include <math.h> 
int main()
{
	int a,count=-1,i;
	scanf("%d",&a);
	int n[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
		count++;
	 } 
	for(i=1;i<=count;i++)
	{
		printf("%d ",n[i]);
	}
	printf("%d",n[0]);
	return 0;
}

