#include<bits/stdc++.h>
#define ll long long
#define N 500000+10
using namespace std;
const int INF=0x3f3f3f3f;
int s[N];
deque<int> dq;
int ans=-INF;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;	cin>>n>>m;
	s[0]=0;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		s[i]+=s[i-1];
	}
	dq.push_back(0);
	for(int i=1;i<=n;i++){//?
		while(!dq.empty()&&dq.front()+m<i) dq.pop_front();
		ans=max(ans,s[i]-s[dq.front()]);
		while(!dq.empty()&&s[dq.back()]>s[i]) dq.pop_back();
		dq.push_back(i);
	}
	cout<<ans;
	return 0;
}
