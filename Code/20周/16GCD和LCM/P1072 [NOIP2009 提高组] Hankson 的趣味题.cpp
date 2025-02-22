#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
bool lcmn(ll b0,ll b1,ll x){
	ll lc=b0/__gcd(b0,x)*x;
	return lc==b1;
}
bool gcdn(ll a0,ll a1,ll x){
	return a1==__gcd(a0,x);
}
ll solve(){
	ll a0,a1,b0,b1;
	cin>>a0>>a1>>b0>>b1;
	ll ans=0;
	double sq=sqrt(b1);
	for(int i=1;i<=sq;i++){
		if(b1%i==0){
			if(gcdn(a0,a1,i)&&lcmn(b0,b1,i)) ans++;
			ll y=b1/i;
			if(y==i) continue;
			if(gcdn(a0,a1,y)&&lcmn(b0,b1,y)) ans++;
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
		cout<<solve()<<endl;
	}
    return 0;
}

