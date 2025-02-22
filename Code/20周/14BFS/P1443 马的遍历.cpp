#include<bits/stdc++.h>
#define ll long long
#define N 500
using namespace std;
const int INF=0x3f3f3f3f;
int dx[8]={2,1,-1,-2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1}; 
struct node{int x,y;};
int vis[N][N];
int dis[N][N];
node pre[N][N];
node s;
void path(node t){
	if(t.x==s.x&&t.y==s.y){
		printf("(%d,%d)->",s.x,s.y);  
		return ;
	}
	node p;
	p.x=pre[t.x][t.y].x;
	p.y=pre[t.x][t.y].y;
	path(p);
	printf("(%d,%d)->",t.x,t.y);
}
int main(){
	int n,m;	cin>>n>>m>>s.x>>s.y;
	memset(dis,-1,sizeof(dis));
	dis[s.x][s.y]=0;
	vis[s.x][s.y]=1;
	queue<node> q;
	q.push(s);
	while(!q.empty()){
		node now=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			node next;
			next.x=now.x+dx[i];
			next.y=now.y+dy[i];
			if(next.x<1||next.x>n||next.y<1||next.y>m||vis[next.x][next.y]) continue;
			vis[next.x][next.y]=1;
			dis[next.x][next.y]=dis[now.x][now.y]+1;
			pre[next.x][next.y]=now;
			q.push(next);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%-5d",dis[i][j]);
		}
		printf("\n");
	}
	node test;
	test.x=3;
	test.y=3;
	//path(test);
    return 0;
}

