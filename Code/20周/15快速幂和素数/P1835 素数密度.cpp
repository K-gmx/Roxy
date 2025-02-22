#include <bits/stdc++.h>
#define ll long long int
const int N = 1000000;
using namespace std;
ll f[N],flag[N];
ll a[50000];
int main(){
	ll l,r,k=0;
	scanf("%lld%lld",&l,&r);
	for(ll i=2;i<=50000;i++){
		if(!f[i]){
			for(ll j=i*i;j<=50000;j+=i){
				f[j]=1;
			}
		} 
	}
	for(ll i=2;i<=50000;i++){
		if(f[i]==0){
			a[++k]=i;
		}
	}
	if(l==1)l=2;
	for(ll i=1;i<=k;i++){
		ll p=a[i],star;
		if((l+p-1)/p*p > 2*p) star = (l+p-1)/p*p;
        else star = 2*p; 
        for(ll j=star;j<=r;j+=p){
        	flag[j-l+1]=1;
		}
	}
	ll s=0;
	for(ll i=1;i<=r-l+1;i++){
		if(flag[i]==0)s++;
	}
	printf("%lld",s);
	return 0;
} 
