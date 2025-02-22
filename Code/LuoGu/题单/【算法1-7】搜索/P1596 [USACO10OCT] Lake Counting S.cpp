#include<bits/stdc++.h>
#define ll long long
#define N 100+20
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int dx[8]={0,0,1,-1,1,-1,1,-1};
int dy[8]={1,-1,0,0,1,-1,-1,1};
char a[N][N];
int vis[N][N]; 
int cnt=0,flag;
void dfs(int x,int y){
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<1||ny<1||nx>n||ny>m||vis[nx][ny]||a[nx][ny]!='W') continue;
		//cout<<nx<<" "<<ny<<endl;
		vis[nx][ny]=1;
		dfs(nx,ny);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			flag=0;
			if(vis[i][j]!=1&&a[i][j]=='W'){
				vis[i][j]=1;
				cnt++;
				dfs(i,j);
			}
		}
	}
	cout<<cnt;
    return 0;
}

