#include <bits/stdc++.h>
#define ll long long int
#define N 30
using namespace std;
ll k,n,a[N],ans=0;
bool is_prime(ll n){
	if(n<=1)return false;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
} 
void dfs(ll cnt,ll sum,ll p){
	if(cnt==k){
		if(is_prime(sum)) ans++;
		return ;
	}
	for(int i=p;i<=n;i++){
		dfs(cnt+1,sum+a[i],i+1);
	}
	return ;
}
int main(){
	scanf("%lld%lld",&n,&k);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	dfs(0,0,1);
	printf("%lld",ans);
	return 0;
} 
