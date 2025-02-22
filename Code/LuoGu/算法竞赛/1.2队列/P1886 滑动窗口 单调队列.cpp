#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
using namespace std;
const int INF=0x3f3f3f3f;
deque<int> dq;
int maxn=-1,minn=INF;
int a[N];
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m; 	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		while(!dq.empty()&&a[dq.back()]>a[i]) dq.pop_back();
		dq.push_back(i);
		if(i>=m){
			while(!dq.empty()&&i-dq.front()>=m) dq.pop_front();
			cout<<a[dq.front()]<<" ";
		}
	}
	dq.clear();
	cout<<endl;
	for(int i=1;i<=n;i++){
		while(!dq.empty()&&a[dq.back()]<a[i]) dq.pop_back();
		dq.push_back(i);
		if(i>=m){
			while(!dq.empty()&&i-dq.front()>=m) dq.pop_front();
			cout<<a[dq.front()]<<" ";
		}
	}
	return 0;
}
