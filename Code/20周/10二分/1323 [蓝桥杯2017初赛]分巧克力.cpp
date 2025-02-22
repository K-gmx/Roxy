//#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long int
#define N 100010
//using namespace std;
ll w[N],h[N],k,n;
int check(ll d){
	ll num;
	for(ll i=1;i<=n;i++){
		num+=(w[i]/d)*(h[i]/d);
	}
	if(num<k) return 0;
	return 1;
}
int main(){
	ll l=1,r=N,mid;
	scanf("%lld%lld",&n,&k);
	for(ll i=1;i<=n;i++){
		scanf("%lld%lld",&w[i],&h[i]);
	}
	while(l!=r){
		mid=(r+l+1)>>1;
		//printf("%lld %lld %lld\n",l,mid,r); 
		if(check(mid)) l=mid;
		else r=mid-1;
	}
	printf("%lld",l);
	return 0; 
}
