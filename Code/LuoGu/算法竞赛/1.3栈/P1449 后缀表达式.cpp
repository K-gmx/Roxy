#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
stack<int> st;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	char ch;
	int a=0;
	while(cin>>ch){
		if(ch<='9'&&ch>='0') a=a*10+(ch-'0');
		if(ch=='.') {
			st.push(a);
			//cout<<a<<endl;
			a=0;
		}
		if(ch=='+'){
			int t1=st.top();
			st.pop();
			int t2=st.top();
			st.pop();
			st.push(t1+t2);
		}
		if(ch=='-'){
			int t1=st.top();
			st.pop();
			int t2=st.top();
			st.pop();
			st.push(t2-t1);
		}
		if(ch=='*'){
			int t1=st.top();
			st.pop();
			int t2=st.top();
			st.pop();
			st.push(t1*t2);
		}
		if(ch=='/'){
			int t1=st.top();
			st.pop();
			int t2=st.top();
			st.pop();
			st.push(t2/t1);
		}
		if(ch=='@'){
			cout<<st.top();
			break;
		}
	}
	
	return 0;
}
