#include<bits/stdc++.h>
#define ll long long
#define N 30
using namespace std;
int vis[N]={0},v2[N]={0},v3[N]={0},tot=0,n;
int a[N]={0};

void dfs(int x){
	if(x==n+1){
		tot++;
		if(tot<=3){
			for(int i=1;i<=n;i++)printf("%d ",a[i]);
			printf("\n");
		}
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		if(v2[x+i])continue;
		if(v3[x-i+n])continue;
		a[x]=i;
		vis[i]=1; v2[x+i]=1; v3[x-i+n]=1;
		dfs(x+1);
		vis[i]=0; v2[x+i]=0; v3[x-i+n]=0;
	}
}
int main(){
	cin>>n;
	dfs(1);
	cout<<tot;
    return 0;
}

