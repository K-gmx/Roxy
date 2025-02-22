#include<bits/stdc++.h>
#define ll long long
#define N 1000+10
using namespace std;
const int INF=0x3f3f3f3f;
int num[6]={1,2,3,5,10,20};
int n,a[N];
int dp[N][N],k=0;
ll sum=0;
int main(){
	for(int i=0;i<=5;i++){
		int x;
		cin>>x;
		for(int j=1;j<=x;j++){
			a[++k]=num[i];
			sum+=a[k];
		}
	}
	n=k;
	for(int i=1;i<=n;i++){
		for(int j=sum;j>=1;j--){
			if(j==a[i]){
				dp[i][j]=1;
			}else if(dp[i-1][j-a[i]]==1&&j-a[i]>0){
				dp[i][j]=1;
				//dp[abs(j-a[i])]=1;
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	int cnt=0;
	for(ll i=1;i<=sum;i++){
		//cout<<dp[n][i]<<endl;
		if(dp[n][i]==1){
			cnt++;
			
		}
	}
	cout<<"Total="<<cnt;
    return 0;
}

