#include<bits/stdc++.h>
#define int long long
#define N 30000+10
using namespace std;
const int INF=0x3f3f3f3f;
int v[50],p[50];
int dp[N];
int n,m;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>v[i]>>p[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=n;j>=v[i];j--){
			dp[j]=max(dp[j],dp[j-v[i]]+v[i]*p[i]);
		}
	}
	cout<<dp[n];
	return 0;
}
