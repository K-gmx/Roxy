#include<bits/stdc++.h>
#include<string>
#define ll long long
#define N 2005
using namespace std;
const int INF=0x3f3f3f3f;
int lok[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
struct point{
	int x,y;
};
struct {
	int px,py;
	int mp;
	char a; 
	int vis;
}node[N][N];
string str[4]={"R","D","L","U"};
int bfs(int n,int m){
	queue<point>q;
	point t;
	t.x=1;
	t.y=1;
	node[1][1].mp=0;
	node[1][1].vis=1;
	q.push(t);
	while(!q.empty()){
		point t=q.front();
		q.pop();
		if(t.x==n&&t.y==m){
			return node[n][m].mp;
		}
		int x=t.x;
		int y=t.y;
		for(int i=0;i<=3;i++){
			int nx=x+lok[i][0];
			int ny=y+lok[i][1];
			//cout<<x<<" "<<y<<" "<<"new"<<node[x][y].pre<<endl;
			//cout<<nx<<" "<<ny<<" "<<i<<node[nx][ny].pre<<endl;
			if(nx<1||nx>n||ny<1||ny>m)continue;
			if(node[x][y].a==node[nx][ny].a||node[nx][ny].vis)continue;
			node[nx][ny].vis=1;
			node[nx][ny].mp=node[x][y].mp+1;
			point t;
			t.x=nx;
			t.y=ny;
			node[nx][ny].px=x;
			node[nx][ny].py=y;
			q.push(t);
		}
	}
	return -1;
}
void path(int x,int y,int n,int m){
	if(x==1&&y==1){
		return ;
	}
	int nx=node[x][y].px;
	int ny=node[x][y].py;
	path(nx,ny,n,m);
	if(y-ny==1){
		cout<<"R";
	}else if(x-nx==1){
		cout<<"D";
	}else if(y-ny==-1){
		cout<<"L";
	}else if(x-nx==-1){
		cout<<"U";
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,m;
		cin>>n>>m;
		for(int k=1;k<=n;k++){
			for(int j=1;j<=m;j++){
				cin>>node[k][j].a;
				node[k][j].vis=0;
			}
		}
		int x=bfs(n,m);
		cout<<x<<endl;
		if(x!=-1){
			path(n,m,n,m);
			cout<<endl;
		}
		
	}
    return 0;
}
/*
2
4 3
101
010
111
010
6 5
10101
11111
01101
01111
01101
01010
1
3 3
011
101
110
*/
