#include<bits/stdc++.h>
#define int long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int f(int n){
	if(n==1) return 1;
	else return n*f(n-1);
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;	cin>>n;
	if(n==0) cout<<"YES";
	else{
		if(f(n)%(n+1)==0)cout<<"YES";
		else cout<<"NO";
	}
	
	return 0;
}
