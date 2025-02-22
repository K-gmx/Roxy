#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll check(ll n){
	ll cnt=0;
	while(n) cnt+=(n/=5);
	return cnt;
} 
int main(){
	ll n,l=0,r=1e19,mid;
	scanf("%lld",&n);
	while(l!=r){
		mid=(l+r)/2;
		if(n>check(mid)){
			l=mid+1;
		}
		else{
			r=mid;
		}
	}
	if(check(l)==n) printf("%lld",l);
	else printf("-1");
	return 0; 
}
