#include<bits/stdc++.h>
#define ll long long
#define N 100010//                    60%AC  40%WA  HacK-TLE 
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int a[N][3];
int vis[N];
ll ans=0;
void dfs(int node,int k,int temp){
	if(k==3){
		ans++;
		return ;
	}else{
		for(int i=1;i<=m;i++){
			if(a[i][1]== temp||a[i][2]== temp){
				int t;
				if(a[i][1]== temp) t=a[i][2];
				if(a[i][2]== temp) t=a[i][1];//
				if(k==2&&t==node&&vis[t]==1||vis[t]==0){
					//cout<<i<<" "<<t<<" "<<k<<endl;
					if(t!=node) vis[t]=1;
					dfs(node,k+1,t);
					if(t!=node) vis[t]=0;
				}
				
			}
		}
	}
	
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i][1]>>a[i][2];
	}
	for(int i=1;i<=n;i++){
		//memset(vis,0,sizeof(vis));
		vis[i]=1;
		dfs(i,0,i);
		vis[i]=0;
	}
	cout<<ans;
    return 0;
}
/*
6 6
1 3
2 3
3 4
3 5
4 5
5 6

1     4
    3  
2     5
      6


*/
