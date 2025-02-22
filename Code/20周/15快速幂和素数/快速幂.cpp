#include <stdio.h>
#define ll long long int
ll fastpow(ll a,ll n,ll mod){
	if(n==0) return 1;
	if(n==1) return a;
	ll t=fastpow(a,n>>1,m)%m;
	if(n&1) return t*t%m*a%m;
	else return t*t%m;
}
int main(){
	ll a,n,mod;
	scanf("%lld%lld%lld",&a,&n,&mod);
	printf("%lld^%lld mod %lld=%lld",a,n,mod,fastpow(a,n,mod));
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;                  //?long long,?int????
ll fastPow(ll a, ll n, ll m){
    ll ans = 1;
    a %= m;                     //????????????a*a??
    while(n) {
        if(n & 1)   ans = (ans*a) % m;   //??
        a = (a*a) % m;                   //??
        n >>= 1;
    }
    return ans;
}
int main(){
    ll a,n,m;   cin >> a >> n>> m;  //m??
    printf("%lld^%lld mod %lld=%lld",a,n,m,fastPow(a,n,m));
    return 0;
}
