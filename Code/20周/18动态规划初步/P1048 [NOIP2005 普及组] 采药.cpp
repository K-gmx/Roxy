#include<bits/stdc++.h>
#define ll long long
#define N 100+10
using namespace std;
const int INF=0x3f3f3f3f;
int t[N],v[N];
int dp[N][1010];
int main(){
	int T,m;
	cin>>T>>m;
	for(int i=1;i<=m;i++) cin>>t[i]>>v[i];
	for(int i=1;i<=m;i++){
		for(int j=T;j>=1;j--){
			if(j>=t[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-t[i]]+v[i]);
			else dp[i][j]=dp[i-1][j];
		}
	} 
	cout<<dp[m][T];
    return 0;
}

