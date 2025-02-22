#include<bits/stdc++.h>
#define ll long long
#define N 2000000000+10
using namespace std;
const long long INF=0x3f3f3f3f;
int minn=N,n,maxn=-N;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;	cin>>x;
		minn=min(minn,x);
		maxn=max(maxn,x);
	}
	ll sum=1ll*maxn+1ll*minn;
	cout<<sum;
    return 0;
}

