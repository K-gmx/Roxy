#include<bits/stdc++.h>
#define int long long
#define N 10000+10
using namespace std;
const int INF=0x3f3f3f3f;
int k[N],m[N];
int dp[N];
int v,n,c;
//int t[N];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>v>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>k[i]>>m[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=c;j>=m[i];j--){
			if(dp[j]<dp[j-m[i]]+k[i]){
				dp[j]=dp[j-m[i]]+k[i];
				//t[j]=t[j-m[i]]+m[i];
			}
		}
	}
	if(dp[c]>=v) {
		int t=c;
		while(dp[c]>=v){
			c--;
		}
		cout<<t-c-1;
	}else cout<<"Impossible";
	return 0;
}
