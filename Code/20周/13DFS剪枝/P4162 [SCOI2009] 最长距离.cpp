#include<bits/stdc++.h>
#define ll long long
#define N 35
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,t;
int a[N][N];
int dis[N][N];
int vis[N][N];
int ans=0;
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
void dfs(int x,int y,int cnt){
	if(cnt>t) return ;
	if(cnt>=dis[x][y]) return ;
	else dis[x][y]=cnt;
	for(int i=0;i<4;i++){
		int nx=dx[i]+x;
		int ny=dy[i]+y;
		if(nx<1||ny<1||nx>n||ny>m) continue ;
		if(vis[nx][ny]==1) continue ;
		vis[nx][ny]=1;
		dfs(nx,ny,cnt+a[nx][ny]);
		vis[nx][ny]=0;
	}
	
}
int main(){
	cin>>n>>m>>t;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char ch; cin>>ch; a[i][j]=ch-'0';
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			memset(dis,0x3f,sizeof(dis));
			memset(vis,0,sizeof(vis));
			int cnt= ((a[i][j]==1)?1:0);
			dfs(i,j,cnt);
			for(int x=1;x<=n;x++){
				for(int y=1;y<=m;y++){
					if(dis[x][y]<=t) ans=max(ans,(x-i)*(x-i)+(y-j)*(y-j));
				}
			}
		}
	}
	//cout<<ans;
	printf("%.6f",sqrt(ans));
    return 0;
}

