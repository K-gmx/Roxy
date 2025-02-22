#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,k,a[200009],b[200009];
int main()
{
  ll min=100000;
  b[0]=0;
  scanf("%lld%lld",&n,&k);
  for(ll i=1;i<=n;i++){
    scanf("%lld",&a[i]);
    b[i]=b[i-1]+a[i];
  }
  for(ll i=0;i<=k;i++){
    ll sum1=b[2*(k-i)],sum2=b[n]-b[n-i];
    min=min<(sum1+sum2)?min:(sum1+sum2);
  }
  printf("%lld",min);
  return 0;
}
