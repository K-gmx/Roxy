#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,C;
int w[N],c[N],m[N];
int n_n;
int n_w[N],n_c[N],dp[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>C;
	for(int i=1;i<=n;i++) cin>>w[i]>>c[i]>>m[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m[i];j<<=1){
			m[i]-=j;
			n_w[++n_n]=j*w[i];
			n_c[n_n]=j*c[i];
		}
		if(m[i]){
			n_w[++n_n]=m[i]*w[i];
			n_c[n_n]=m[i]*c[i];
		}
	}
	for(int i=1;i<=n_n;i++){
		for(int j=C;j>=n_c[i];j--){
			dp[j]=max(dp[j],dp[j-n_c[i]]+n_w[i]);
		}
	}
	cout<<dp[C];
	return 0;
}
