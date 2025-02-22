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
    int n,m=0;	cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		int t; cin>>t;
    		if(t!=0){
    			m++;
    			a[m].x=i;
    			a[m].y=j;
    			a[m].v=t;
			}
		}
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
	cout<<ans;
    return 0;
}

