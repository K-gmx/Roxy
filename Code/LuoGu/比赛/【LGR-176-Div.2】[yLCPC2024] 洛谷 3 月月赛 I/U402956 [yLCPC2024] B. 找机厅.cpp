#include<bits/stdc++.h>
#define ll long long
#define N 2010
using namespace std;//   								 failed
const int INF=0x3f3f3f3f;
int ans=INF;
char a[N][N];
int n,m; 	
char ch[N+N+10];
int tc[N+N+10];
int vis[N][N];
int lok[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int dis[N][N];
void dfs(int x,int y,int s){
	if(s>ans)return ;
	if(x==n-1&&y==m-1){
		if(s<ans){
			ans=s;
			for(int i=1;i<=s;i++){
			if(tc[i]==0) ch[i-1]='R';
			else if(tc[i]==1) ch[i-1]='D';
			else if(tc[i]==2) ch[i-1]='L';
			else if(tc[i]==3) ch[i-1]='U';
			}
			ch[s]='\0';
		}
	
		return ;
	}else{
		for(int i=0;i<=3;i++){
			int nx=x+lok[i][0];
			int ny=y+lok[i][1];
			if(nx<0||nx>n-1||ny<0||ny>m-1)continue;
			if(a[x][y]==a[nx][ny]||vis[nx][ny]==1)continue;
			vis[nx][ny]=1;
			tc[s+1]=i;
			dfs(nx,ny,s+1);
			vis[nx][ny]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
		cin>>n>>m;
		ans=n+m+1;
		vis[0][0]=1;
		memset(dis,0,sizeof(dis));
		for(int i=0;i<n;i++){
			cin>>a[i];
		}/*
		for(int i=0;i<=n;i++){
			for(int j=0;j<=m;j++) vis[i][j]=0;
		}*/
		dfs(0,0,0);
		if(ans==n+m+1) printf("-1\n");
		else{
			cout<<ans<<endl;/*
			for(int i=0;i<=time;i++){
				cout<<ch[i];
			}
			printf("\n");*/
			printf("%s\n",ch);
		}
	}
    return 0;
}
/*
1
6 6
101010
111110
011010
011110
011010
010101
*/
