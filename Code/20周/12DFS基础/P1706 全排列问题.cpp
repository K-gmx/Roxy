#include<bits/stdc++.h>
#define ll long long
#define N QwQ
using namespace std;
int n;
int vis[20];
int a[20],b[20];
void dfs(int step){
	if(step==n+1){
		for(int i=1;i<=n;i++){
			printf("%5d",b[i]);
		}
		printf("\n");
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			b[step]=a[i];
			dfs(step+1);
			vis[i]=0;
		}
	}
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)a[i]=i;
	dfs(1);
    return 0;
}
