#include<bits/stdc++.h>
#define ll long long
#define N 50
using namespace std;
const int INF=0x3f3f3f3f;
const int fx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
const int fy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
ll dp[N][N];
bool s[N][N];
int xx,yy;
int n,m;
int main(){
	dp[0][1]=1;
	cin>>n>>m>>xx>>yy;
	n++;
	m++;
	yy++;
	xx++;
	for(int i=0;i<9;i++){
		int nx=fx[i]+xx;
		int ny=fy[i]+yy;
		if(nx<1||nx>n||ny>m||ny<1){
			
		}else{
			s[nx][ny]=true;
			//dp[nx][ny]=-1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s[i][j]){
				dp[i][j]=0;
			}else{
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
	}/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<dp[n][m];
    return 0;
}

