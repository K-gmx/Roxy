#include <bits/stdc++.h>
#define ll long long int
#define N 100009
using namespace std;
ll cnt[N],d[N],a[N];
int main(){
	ll n,m;
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&m);
	for(ll i=1;i<=m;i++){
		ll r,l;
		scanf("%lld%lld",&l,&r);
		d[l]++;d[r+1]--;
	}
	cnt[0]=0;
	for(ll i=1;i<=n;i++){
		cnt[i]=cnt[i-1]+d[i];
	}
	ll ans1=0,ans2=0;
	for(ll i=1;i<=n;i++){
		ans1+=cnt[i]*a[i];
	}
	sort(a+1,a+1+n);
	sort(cnt+1,cnt+1+n);
	for(ll i=1;i<=n;i++){
		ans2+=cnt[i]*a[i];
	}
	printf("%lld",ans2-ans1);
	return 0;
}

