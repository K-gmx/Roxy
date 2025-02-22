#include<bits/stdc++.h>
#define ll long long
#define N 20000+10
using namespace std;
const int INF=0x3f3f3f3f;
int v;
int n; 
int dp[50][N];
int w[N];
int main(){
	cin>>v>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			if(j>=w[i]) {
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+w[i]);
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<v-dp[n][v];
    return 0;
}

