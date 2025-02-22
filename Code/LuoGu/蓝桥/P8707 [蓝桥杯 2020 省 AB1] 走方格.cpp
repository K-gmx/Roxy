#include<bits/stdc++.h>
#define ll long long
#define N 50
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,dp[N][N];
int main(){
	cin>>n>>m;
	dp[0][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!(i%2==0&&j%2==0))dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	cout<<dp[n][m]<<endl;/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
    return 0;
}

