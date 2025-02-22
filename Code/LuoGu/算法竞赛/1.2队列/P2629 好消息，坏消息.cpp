#include<bits/stdc++.h>
#define ll long long
#define N 2000000+10
using namespace std;
const int INF=0x3f3f3f3f;
int ans=0;
deque<int> dq;
int n;
ll a[N],s[N];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(register int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(register int i=n+1;i<2*n-1;i++){
		a[i]=a[i-n];
	}
	for(register int i=1;i<=2*n-1;i++){
		s[i]=s[i-1]+a[i];
	}
	for(register int i=1;i<=2*n-1;i++){
		while(!dq.empty()&&i-dq.front()>n) dq.pop_front();
		while(!dq.empty()&&s[i]<s[dq.back()]) dq.pop_back();
		dq.push_back(i);
		if(i>=n&&s[dq.front()]-s[i-n]>=0) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
