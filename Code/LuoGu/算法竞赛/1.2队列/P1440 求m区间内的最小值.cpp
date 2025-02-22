#include<bits/stdc++.h>
#define ll long long
#define N 2000000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int a[N];
deque<int> dq;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<0<<endl;
	dq.push_back(1);
	for(int i=2;i<=n;i++){
		while(!dq.empty()&&a[dq.back()]>a[i-1]) {
			dq.pop_back();//cout<<i<<endl;
		}
		dq.push_back(i-1);
		while(!dq.empty()&&i-dq.front()>m) {
			dq.pop_front();//cout<<i<<endl;
		}
		
		cout<<a[dq.front()]<<endl;
	}
	return 0;
}
