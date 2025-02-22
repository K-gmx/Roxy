#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod=100003;
ll fastpow(ll a,ll n,ll m){
	if(n==0) return 1;
	if(n==1) return a;
	ll t=fastpow(a,n>>1,m)%m;
	if(n&1) return t*t%m*a%m;
	else return t*t%m;
}
int main(){
	ll n,m;
	scanf("%lld%lld",&n,&m);
	ll sum=fastpow(n,m,mod);
	ll s=sum-fastpow(n-1,m-1,mod)*n%mod;
	if(s<0) s += mod;    //ans?????,????
	s %= mod;
	printf("%lld",s);
	return 0;
} 
