#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
#define mod 998244353
using namespace std;
const int INF=0x3f3f3f3f;
int num[N];
ll f[N];
void jiechen(int n){
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=n;i++){
		f[i]=f[i-1]*i%mod;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	jiechen(n);
	for(int i=0;i<n;i++) cin>>num[i];
	ll ans=1;
	for(int i=0;i<n;i++){
		int t=0;
		for(int j=i+1;j<n;j++){
			if(num[j]<num[i]) t++;
		}
		ans=(ans+1ll*t*f[n-i-1]%mod)%mod;
	}
	cout<<ans<<endl;;
	return 0;
}
