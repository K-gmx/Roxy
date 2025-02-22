#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int h[N],ans[N];
int n;
stack<int> st;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>h[i];
	for(int i=n;i>=1;i--){
		while(!st.empty()&&h[st.top()]<=h[i]) st.pop();
		if(!st.empty()) ans[i]=st.top();
		else ans[i]=0;
		st.push(i);
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<endl;
	return 0;
}
