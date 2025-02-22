#include<bits/stdc++.h>
#define ll long long
#define N 3000000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n;
int a[N];
int ans[N];
stack<int> st;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		while(!st.empty()&&a[i]>=a[st.top()]) st.pop();
		if(st.empty()) ans[i]=0;
		else ans[i]=st.top();
		st.push(i);
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	return 0;
}
