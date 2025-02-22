#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	ll x=n;
	while(n>=3){//33 11
		ll t=n/3;
		x+=t;
		n-=(t*3);
		n+=t;
	}
	cout<<x;
    return 0;
}

