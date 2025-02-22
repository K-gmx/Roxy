#include<bits/stdc++.h>
#define ll long long
#define N 10000000+5
using namespace std;
const int INF=0x3f3f3f3f;
ll t[N],v[N];
ll dp[N];
int main(){
	ll T,m;
	cin>>T>>m;
	for(ll i=1;i<=m;i++) cin>>t[i]>>v[i]; 
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=T;j++){
			if(j>=t[i])dp[j]=max(dp[j-t[i]]+v[i],dp[j]);
		}
	}
	cout<<dp[T];
    return 0;
}

