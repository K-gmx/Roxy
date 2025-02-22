#include<stdio.h>
bool canThreePartsEqualSum(int* arr, int arrSize){
    int sum=0;
    for(int i=0;i<arrSize;i++)
    {
      sum+=arr[i];
    }
    if(sum%3!=0)
    {
      return false;
    }
    int sum1=0,count=0;
    int aver=sum/3;
    for(int i=0;i<arrSize;i++)
    {
      if(count>=2)
      {
        return true;
      }
      sum1+=arr[i];
      if(sum1==aver)
      {
        sum1=0;
        count++;
      }
    }
    return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(canThreePartsEqualSum(a,n))
	printf("true");
	else
	printf("false");
	return 0;
}
