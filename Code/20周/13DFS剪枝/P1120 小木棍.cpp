#include<bits/stdc++.h>
#define ll long long
#define N 70
using namespace std;
const int INF=0x3f3f3f3f;
int Hash[N];
int maxn=0,minn=N;
void dfs(int k,int l,int len,int p){
	if(k==0){
		cout<<len;
		exit(0);
	}
	if(l==len){
		dfs(k-1,0,len,maxn);
		return ;
	}
	for(int i=p;i>=minn;i--){
		if(Hash[i]>0&&i+l<=len){
			Hash[i]--;
			dfs(k,i+l,len,i);
			Hash[i]++;
			if(l==0) return ;
			if(i+l==len) return ;
		}
	}
}
int main(){
	int n; cin>>n;
	int sum=0;
	while(n--){
		int a;
		cin>>a;
		Hash[a]++;
		maxn=max(maxn,a);
		minn=min(minn,a); 
		sum+=a;
	}
	for(int i=maxn;i<=sum/2;i++){
		if(sum%i==0) dfs(sum/i,0,i,maxn);
	}
	cout<<sum;
    return 0;
}

