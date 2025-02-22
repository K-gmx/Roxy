#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
priority_queue<int,vector<int>,greater<int>> u;
priority_queue<int,vector<int>,less<int>> d;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t,tt;
		cin>>t;
		if(i==1) {
			d.push(t);
			cout<<d.top()<<endl;
			continue;
		}

		if(d.size()==u.size()){
			if(t>u.top()){
				tt=u.top();
				u.pop();
				u.push(t);
				d.push(tt);
			}else{
				d.push(t);
			}
		}else{
			if(t<d.top()){
				tt=d.top();
				d.pop();
				d.push(t);
				u.push(tt);
			}else{
				u.push(t);
			}
		}
		if(i&1)cout<<d.top()<<endl;
	}	
	
	return 0;
}
