#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,flag=0,count=0;
  scanf("%d",&n);
  int a[10001]={0};
  int b[10001]={0};
  int i=1;
  while(flag!=1)
  {
    b[i]=0;
    for(int j=1;j<=n;j++)
    {
      if(j!=i)
      {
        b[j]++;
        count++;
      }
      if(a[j]<b[j])
      {
        a[j]=b[j];
        count=0;
      }
    }
    if(i==n)
    {
      i=0;
    }
    i++;
    if(count>2*n)break;
  }
  for(i=1;i<=n;i++)
  {
    printf("%d\n",a[i]);
  }
  return 0;
}
