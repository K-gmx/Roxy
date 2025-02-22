#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
#define MOD (1000000000+7)
using namespace std;
const int INF=0x3f3f3f3f;
ll n;
int maxn=0;
int a[N]={0};
ll cnt=0;
ll c(int x){
	return x*(x-1ll)/2ll%MOD;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	int t;
    	cin>>t;
    	a[t]++;
    	maxn=max(t,maxn);
	}
	for(int i=2;i<=maxn;i++){
		if(a[i]<=1) continue;
		ll t=c(a[i])%MOD;
		for(int j=1;j<=i/2;j++){
			if(a[j]>=2&&j==i-j){
				cnt+=t*c(a[j])%MOD;
			}
			if(a[j]>=1&&a[i-j]>=1&&j!=i-j){
				cnt+=t*a[j]*a[i-j]%MOD;
			}
			cnt%=MOD;
		}
	}
	cout<<cnt%MOD;
	//2132121321
    return 0;
}
