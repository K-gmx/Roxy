#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
int ans=0;
int n,k;
void dfs(int s,int i,int num){
	if(i<1){
		ans++;
		//cout<<num<<endl;
		return ;
	}else{
		int m=min(9,k-s);
		for(int j=0;j<=m;j++){
			//cout<<j<<" "<<s<<" "<<i<<" "<<k<<endl;
			if(s+j<=k) {
				dfs(s+j,i-1,num*10+j);
			}
		}
	}
}
int main(){
	int nn;
	cin>>nn;
	for(int i=1;i<=nn;i++){
		cin>>n>>k;
		dfs(0,n,0);
		cout<<ans-1<<endl;
		ans=0;
	}
    return 0;
}

