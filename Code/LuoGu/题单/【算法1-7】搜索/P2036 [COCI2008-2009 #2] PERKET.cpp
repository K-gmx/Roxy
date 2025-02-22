#include<bits/stdc++.h>
#define ll long long
#define N 10+10
using namespace std;
const int INF=0x3f3f3f3f;
int minn=INF;
int vis[N];
int a[N],b[N];
int n;
void dfs(int su,int ku){
	if(su!=0&&ku!=0){
		minn=min(minn,abs(su-ku));
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		
		int ts=su; if(ts==0) ts=1;
		int tk=ku+b[i];
		    ts*=a[i];
		
		//if(abs(ts-tk)>minn) continue;
		
		dfs(ts,tk);
		
		vis[i]=0;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	dfs(0,0);
	cout<<minn;
    return 0;
}

