#include<bits/stdc++.h>
#define ll long long
#define N 200
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int dp[N][10001];
int a[N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i]==j) dp[i][j]=dp[i-1][j]+1;
			if(a[i]>j) dp[i][j]=dp[i-1][j];
			if(a[i]<j) dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i]];
		}
	}
	cout<<dp[n][m];
    return 0;
}

