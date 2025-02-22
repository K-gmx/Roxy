#include<bits/stdc++.h>
#define ll long long
#define N 100000+500
using namespace std;
const int INF=0x3f3f3f3f;
	int n,a[N];
	int dp[101][N];

	ll sum=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=sum;j>=1;j--){
			if(j==a[i])   	dp[i][j]=1;
			else if(dp[i-1][abs(j-a[i])]==1)	dp[i][j]=1;
				
			else if(dp[i-1][j+a[i]]==1)	dp[i][j]=1;
				
			else	dp[i][j]=dp[i-1][j];
				
			
		}
	}
	int cnt=0;
	for(ll i=1;i<=sum;i++){
		//cout<<dp[n][i]<<endl;
		if(dp[n][i]==1){
			cnt++;
			
		}
	}
	cout<<cnt;
    return 0;
}

