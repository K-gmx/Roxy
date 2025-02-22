#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
int k;
int a[N],ans=0;
void dfs(int x,int sum,int i){
	if(i==k+1&&sum!=0)return ;
	if(i==k+1){/*
		for(int j=1;j<=k;j++){
			printf("%d ",a[j]);
		}
		printf("\n");*/
		ans++;
		return ;
	}else{
		for(int j=x;j<=sum;j++){
			if(sum>=x){
				a[i]=j;
				dfs(j,sum-j,i+1);
			}
		}
	}
}
int main(){
	int n;
	cin>>n>>k; 
	dfs(1,n,1);
	cout<<ans;
    return 0;
}

