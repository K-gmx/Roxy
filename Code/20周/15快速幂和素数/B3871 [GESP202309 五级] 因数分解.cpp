#include <bits/stdc++.h>
#define ll long long int
int main(){
	ll n;
	scanf("%lld",&n);
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			ll cnt=0;
			while(n%i==0){
				n/=i;
				cnt++;
			}
			if(cnt==1) printf("%lld * ",i);
			else printf("%lld^%lld * ",i,cnt);
		}
	}
	printf("%lld",n);
	return 0;
}
