#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int dp[10];
int main(){
	string a;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		dp[a[a.size()-1]-48]=max(dp[a[a.size()-1]-48],dp[a[0]-48]+1);
	} 
	int maxn=0;
	for(int i=0;i<=9;i++) maxn=max(maxn,dp[i]);
	cout<<n-maxn;
    return 0;
}

