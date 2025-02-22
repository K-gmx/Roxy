#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
  int n,k=0,a[100009];
  scanf("%d",&n);
  while(scanf("%d",&a[k++])!=-1){}
  int a1,b;
  sort(a,a+k);
  for(int i=k-1;i>=1;i--){
    if(a[i]-a[i-1]==2)a1=a[i]-1;
    if(a[i]-a[i-1]==0)b=a[i];
  }
  printf("%d\n%d",a1,b);
  return 0;
}
