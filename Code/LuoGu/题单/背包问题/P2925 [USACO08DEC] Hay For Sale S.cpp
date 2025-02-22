#include<bits/stdc++.h>
#define int long long
#define N 45000+10
using namespace std;
const int INF=0x3f3f3f3f;
int s[N];
int dp[N];
int h,n;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>h>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=h;j>=s[i];j--){
			if(dp[j]<dp[j-s[i]]+s[i]){
				dp[j]=dp[j-s[i]]+s[i];
			}
		}
	}
	cout<<dp[h];
	return 0;
}
