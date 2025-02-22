#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
using namespace std;
const int INF=0x3f3f3f3f;
int d[5][3]={{},{0,1},{0,-1},{1,0},{-1,0}};
int k,q[N],sum[N],fa[N];
bool vis[1010][1010];
int n,m;
struct node{
	int x,y,h;
}s[N];
int find(int x){
	if(x!=fa[x]) fa[x]=find(fa[x]);
	return fa[x];
}
int pd(int x,int y){
	return find(x)==find(y);
}
void merge(int x,int y){
	fa[find(x)]=find(y);
}
int cmp(node x,node y){
	return x.h>y.h;
}
int main(){
	//memset(vis,false,sizeof vis);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		int num=(i-1)*m+j;
    		s[num].x=i;
    		s[num].y=j;
    		fa[num]=num;
    		scanf("%d",&s[num].h);
		}
	}
	sort(s+1,s+1+n*m,cmp);
	//for(int i=1;i<=n*m;i++) cout<<s[i].h<<" ";
	cin>>k;
	for(int i=1;i<=k;i++)	scanf("%d",&q[i]);
	int ans=0,now=1;
	for(int i=k;i>=1;i--){//cout<<i<<endl;
		while(now<=n*m&&s[now].h>q[i]){
			ans++;
			int x=s[now].x;
			int y=s[now].y;
			vis[x][y]=true;
			for(int j=1;j<=4;j++){
				int tx=x+d[j][0];
				int ty=y+d[j][1];
				if(tx<1||ty<1||tx>n||ty>m||!vis[tx][ty]) continue;
				int nx=(x-1)*m+y;
				int ny=(tx-1)*m+ty;
				if(!pd(nx,ny)){
					merge(nx,ny);
					ans--;//cout<<tx<<" "<<ty<<endl;
				}
			}
			now++;
		}
		sum[i]=ans;
	}
	
    for(int i=1;i<=k;i++) printf("%d ",sum[i]);
    return 0;
}

