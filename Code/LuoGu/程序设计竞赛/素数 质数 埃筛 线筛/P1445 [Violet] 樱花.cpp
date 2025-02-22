#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF=2147483647;
const int N = 1000010;
const int MOD = 1000000007;
int n,v[N],p[N],m;
int ans=1,c[N];
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		if(!v[i]){
			v[i]=i;
			p[++m]=i;
		}
		for(int j=1;j<=m;j++){
			if(p[j]>n/i||p[j]>v[i]) break;
			v[p[j]*i]=p[j];
		}
	}
	
	for(int i=2;i<=n;i++){
		//cout<<i<<endl;
		for(int j=i;j!=1;j/=v[j]){
			c[v[j]]++;//cout<<" "<<v[j]<<endl;
		}
	}
	for(int i=1;i<=n;i++) ans=1ll*ans*(c[i]*2+1)%MOD;
	cout<<ans;
	//for(int i=1;i<=50;i++) cout<<i<<" "<<c[i]<<endl;
    return 0;
}

