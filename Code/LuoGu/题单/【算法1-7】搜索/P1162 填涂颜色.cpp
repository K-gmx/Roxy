#include<bits/stdc++.h>
#define ll long long
#define N 50
using namespace std;
const int INF=0x3f3f3f3f;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int a[N][N];
int vis[N][N];
int n,flag;
void dfs(int x,int y){
	//cout<<flag<<" "<<x<<" "<<y<<endl;
	if(x<1||y<1||x>n||y>n) {
		flag=1;
		return ;
	}else{
		for(int i=0;i<=3;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(vis[nx][ny]||a[nx][ny]==1) continue ;
			if(nx<1||ny<1||nx>n||ny>n) flag=1;
			vis[nx][ny]=1;
			dfs(nx,ny);
			//if(flag==1) return;
			
			//vis[nx][ny]=0;
		}
	}
	
}
void dto(int x,int y){
	for(int i=0;i<=3;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<1||ny<1||nx>n||ny>n) continue;
		if(a[nx][ny]==0){
			a[nx][ny]=2;
			dto(nx,ny);
		}
	}
}
void print(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			flag=0;
			if(a[i][j]==0&&vis[i][j]!=1){
				vis[i][j]=1;
				dfs(i,j);
				//cout<<i<<" "<<j<<" "<<flag<<endl;
				if(flag==0){
					dto(i,j);
					a[i][j]=2;
					//print();cout<<endl;
				}
			}
		}
	}
	print();
    return 0;
}
/*
5
1 1 0 0 0
0 0 1 1 1 
1 1 1 0 0
0 1 0 1 1 
1 1 1 1 1 
*/

