#include<bits/stdc++.h>
#define ll long long
#define Y 1000000007
using namespace std;
const int INF=0x3f3f3f3f;
ll cnt=0;
int main(){
	ll n;
	cin>>n;
	n--;
	for(ll i=1;i<=n;i++){
		cnt+=((n-i+1)*(n-i+1)*i);
		cnt%=Y;
	}
	cout<<cnt;
    return 0;
}

