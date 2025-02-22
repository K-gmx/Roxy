#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int dp[1010];
int w[1001],z[1001],b[1001],g[101][1001];
int t=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>w[i]>>z[i]>>x;
		t=max(t,x);
		b[x]++;
		g[x][b[x]]=i;
	}
	for(int i=1;i<=t;i++){
		for(int j=m;j>=0;j--){
			for(int k=1;k<=b[i];k++){
				if(j>=w[g[i][k]])dp[j]=max(dp[j],dp[j-w[g[i][k]]]+z[g[i][k]]);
			}
		}
	}
	cout<<dp[m];
	return 0;
}
