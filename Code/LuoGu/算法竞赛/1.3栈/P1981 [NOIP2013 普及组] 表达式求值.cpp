#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
#define mod 10000
using namespace std;
const int INF=0x3f3f3f3f;
stack<int> st;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int a;	cin>>a;
	char ch;
	st.push(a%mod);
	while(cin>>ch>>a){
		if(ch=='*'){
			int t=st.top();
			st.pop();
			st.push(a*t%mod);
		}else st.push(a);
	}	
	a=0;
	while(!st.empty()){
		a=a+st.top();
		a%=mod;
		st.pop();
	}
	cout<<a;
	return 0;
}
