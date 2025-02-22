#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll n,sum=0,a[10010]={0}; 
	scanf("%lld",&n);
	for(ll i=0;i<=n-1;i++){
		ll k;
		scanf("%lld%lld",&k,&a[i]);
	}
	sort(a,a+n);
	ll mid=n&1?a[(n/2+n/2+1)/2]:a[n/2];
	for(ll i=0;i<=n-1;i++){
		sum+=abs(mid-a[i]);
	}
	printf("%lld",sum);
    return 0;
}

