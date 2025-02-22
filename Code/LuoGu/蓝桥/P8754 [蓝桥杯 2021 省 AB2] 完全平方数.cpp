#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF=0x3f3f3f3f;
ll f;
ll n; 
int main(){
	cin>>n;
	ll x=1;
	for(ll i=2;i<=n;i++){
		f=0;
		while(n%i==0){
			n/=i;
			f++;
		}
		if(f&1) x*=i;
	}
	if(n!=1) x*=n;
	cout<<x;
    return 0;
}

