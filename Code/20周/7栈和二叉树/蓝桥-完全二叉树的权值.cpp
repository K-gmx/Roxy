#include <iostream>
#include <math.h>
#define N 100
using namespace std;
int main()
{
  int n,k=2,m,mm=1;
  int a[N]={0};
  int max[N][2]={0};
  long long deep=1,num=2;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  max[1][0]=a[1];
  max[1][1]=deep;
  for(int j=1;j<=sqrt(n+1);j++)
  {
  	deep++;
    num=pow(2,deep-1);
    for(int i=1;i<=num;i++)
    {
      max[deep][0]+=a[k++];
    }
    max[deep][1]=deep;
  }
  m=max[1][0];
  for(int i=1;i<deep;i++)
  {
    if(m<max[i][0]){
      mm=max[i][1];
      m=max[i][0];
    }
  }
  //cout<<deep<<endl;
  //cout<<k<<endl;
  //cout<<m<<endl; 
  cout<<mm;
  return 0;
}
