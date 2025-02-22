#include<bits/stdc++.h>
#define ll long long
#define N 1000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n;
int s[N];
int dp[N];
int solve(int x){
	int ans=0;
	for(int i=1;i<x;i++){
		if(x%i==0) ans+=i;
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) {
		s[i]=solve(i);
		//cout<<s[i]<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			dp[j]=max(dp[j],dp[j-i]+s[i]);
		}
	}
	cout<<dp[n];
	return 0;
}
