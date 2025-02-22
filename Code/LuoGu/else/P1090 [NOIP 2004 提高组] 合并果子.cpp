#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
priority_queue<int,vector<int>,greater<int>> q;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		int t;
		cin>>t;
		q.push(t);
	}
	ll ans=0;
	for(int i=1;i<=n-1;i++){
		int a,b;
		a=q.top();
		q.pop();
		b=q.top();
		q.pop();
		ans+=a+b;
		//cout<<a<<" "<<b<<" "<<a+b<<endl;
		q.push(a+b);
	}
	//ans+=q.top();
	cout<<ans;
	return 0;
}
