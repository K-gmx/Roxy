#include<bits/stdc++.h>
#define ll long long
#define N 1000+10
using namespace std;
const int INF=0x3f3f3f3f;
int l[N],w[N],u[N];
int n,x;
int dp[N][1000+10];
int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>l[i]>>w[i]>>u[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=x;j++){
			if(j>=u[i]){
				dp[i][j]=max(dp[i-1][j-u[i]]+w[i],dp[i-1][j]+l[i]);
			}else{
				dp[i][j]=dp[i-1][j]+l[i];
			}
		}
	}
	cout<<dp[n][x]*5ll<<endl;
    return 0;
}

