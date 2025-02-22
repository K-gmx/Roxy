#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
using namespace std;
const int INF=0x3f3f3f3f;
ll n,m,k,t;
ll a[N];
int main(){
	cin>>n>>m>>k>>t;
	for(ll i=1;i<=n*m;i++){
		cin>>a[i];
	}//
	sort(a+1,a+1+n*m);
	ll sum=0,ans=0;
	for(ll i=n*m;i>=1;i--){
		cout<<ans<<" ";
		t--;
		sum+=a[i];
		ans+=a[i];
		if(ans/k>0){
			t+=ans/k;
			ans=ans%k;
		}
		//a[i]=0;
		if(t<0) break;
	}
	cout<<sum;
    return 0;
}

