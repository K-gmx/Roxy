#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
using namespace std;
const int INF=0x3f3f3f3f;
int dp[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;	cin>>n;
	int maxn=-INF;
	for(int i=1;i<=n;i++){
		cin>>dp[i];
	}
	for(int i=2;i<=n;i++){
		dp[i]=max(dp[i-1]+dp[i],dp[i]);
		maxn=max(maxn,dp[i]);
	}
	cout<<maxn;
	return 0;
}
