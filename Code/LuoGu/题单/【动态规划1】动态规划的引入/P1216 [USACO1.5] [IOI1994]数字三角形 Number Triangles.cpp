#include<bits/stdc++.h>
#define ll long long
#define N 1000+10
using namespace std;
const int INF=0x3f3f3f3f;
int m[N][N];
int dp[N][N];
int ans=0;
int main(){
	int r;
	cin>>r;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			cin>>m[i][j];
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+m[i][j];
			ans=max(dp[i][j],ans);
		}
	}
	cout<<ans;
    return 0;
}

