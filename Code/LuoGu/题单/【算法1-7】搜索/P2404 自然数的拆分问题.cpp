#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int n;
int p[N];
void dfs(int num,int k,int x){
	if(x==n){
		if(k==2) return ;
		cout<<p[1];
		for(int i=2;i<=k-1;i++){
			cout<<"+"<<p[i];
		}
		cout<<endl;
		return ;
	}else{
		int max=n-x;
		for(int i=num;i<=max;i++){
			p[k]=i;
			dfs(i,k+1,x+i);
		}
	}
	return ;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	dfs(1,1,0);
    return 0;
}

