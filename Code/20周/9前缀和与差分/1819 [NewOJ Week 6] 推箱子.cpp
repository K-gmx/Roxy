#include <bits/stdc++.h>
#define ll long long int
#define N 1000000
using namespace std;
ll sum[N],d[N],a[N];
int main(){
	ll n,h,ans=0;
	scanf("%lld%lld",&n,&h);
	for(ll i=0;i<n;i++){
		ll x,y;
		scanf("%lld%lld",&x,&y);
		d[x]++;d[y+1]--;
	}
	for(ll i=0;i<n;i++){
		if(i==0) a[i]=d[i];
		else a[i]=a[i-1]+d[i];
	}
	for(ll i=0;i<n;i++){
		if(i==0) sum[i]=a[i];
		else sum[i]=sum[i-1]+a[i];
	}
	for(ll i=0;i<n-h+1;i++){
		ans=max(ans,sum[i+h-1]-sum[i-1]);
	}
	printf("%lld",n*h-ans);
	/*for(ll i=0;i<n;i++){
		printf("%lld ",a[i]);
	}*/
	return 0;
}

