#include<bits/stdc++.h>
#define ll long long
#define N 250+10
using namespace std;
const int INF=0x3f3f3f3f;
int vis[N],dis[N],a[N][N];
int n,m,x,y,u;
void dijkstra(){
	for(int i=1;i<=n;i++){
		int p=INF;
		//int u;
		for(int j=1;j<=n;j++){
			if(vis[j]==0&&dis[j]<p){
				u=j;
				p=dis[j];
			}
		}
		vis[u]=1;
			for(int j=1;j<=n;j++){
				if(vis[j]==0) dis[j]=min(dis[j],dis[u]+a[u][j]);
			}
	}
} 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>x>>y;
   // memset(vis,0,sizeof vis);
    vis[x]=1;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(i==j) a[i][j]=0;
    		else a[i][j]=INF;
		}
	}
	
    while(m--){//cout<<m<<endl;
    	int px,py,cost;
    	cin>>px>>py>>cost;
    	a[px][py]=cost;
		a[py][px]=cost;
	}//cout<<1<<endl;
	for(int i=1;i<=n;i++) dis[i]=a[x][i];
	dijkstra();
	cout<<dis[y];
	//for(int i=1;i<=n;i++) cout<<dis[i]<<endl;
    return 0;
}

