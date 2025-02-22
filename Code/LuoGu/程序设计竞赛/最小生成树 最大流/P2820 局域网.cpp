#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
struct point{
	int x,y,v;
}a[N];
int fa[N];
int find(int x){
	if(fa[x]!=x) fa[x]=find(fa[x]);
	return fa[x];
}
int cmp(point x,point y){
	return x.v<y.v;
}
void merge(int x,int y){
	fa[find(x)]=find(y);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m;	cin>>n>>m;
    int ans=0;
    ll sum=0;
    for(int i=1;i<=m;i++){
    	int x,y,v;
    	cin>>x>>y>>v;
    	a[i].x=x;
    	a[i].y=y;
    	a[i].v=v;
    	sum+=v;
	}
	for(int i=1;i<=n;i++) fa[i]=i;
	sort(a+1,a+m+1,cmp);
	int k=0;
	for(int i=1;i<=m;i++){
		if(find(a[i].x)!=find(a[i].y)){
			merge(a[i].x,a[i].y);
			ans+=a[i].v;
			k++;
		}
		if(k==m-1) break;
	}
	cout<<sum-ans;
    return 0;
}

