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
    int ans=0,cnt=0;
    for(int i=1;i<=n;i++) fa[i]=i;
    for(int i=1;i<=m;i++){
    	int flag,x,y,v;
    	cin>>flag>>x>>y>>v;
    	if(flag==1){
    		merge(x,y);
    		ans+=v;
		}else{
			++cnt;
			a[cnt].x=x;
	    	a[cnt].y=y;
	    	a[cnt].v=v;
		}
    	
	}
	
	sort(a+1,a+cnt+1,cmp);
	for(int i=1;i<=cnt;i++){
		if(fa[find(a[i].x)]!=fa[find(a[i].y)]){
			merge(a[i].x,a[i].y);
			ans+=a[i].v;
		}
		//if(k==n-1) break;
	}
	cout<<ans;
    return 0;
}

