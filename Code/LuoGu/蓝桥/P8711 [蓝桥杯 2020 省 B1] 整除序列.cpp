#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	ll x; cin>>x; //x/=2;
	while(x!=0){
		cout<<x<<" ";
		x/=2;
	}
    return 0;
}

