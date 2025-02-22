#include<bits/stdc++.h>
#define ll long long
#define N 15
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,t;
int sx,sy,fx,fy;
int a[N][N];
int vis[N][N];
int sum=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void dfs(int x,int y){
	if(x==fx&&y==fy){
		sum++;
		return ;
	}else{
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx<1||ny<1||nx>n||ny>m||vis[nx][ny]) continue;
			vis[nx][ny]=1;
			dfs(nx,ny);
			vis[nx][ny]=0;
		}
	}
}
int main(){
	cin>>n>>m>>t;
	cin>>sx>>sy>>fx>>fy;
	for(int i=1;i<=t;i++){
		int x,y;
		cin>>x>>y;
		vis[x][y]=1;
	}
	vis[sx][sy]=1;
	dfs(sx,sy);
	cout<<sum;
    return 0;
}

