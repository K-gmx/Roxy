#include<bits/stdc++.h>
#define ll long long
#define N 500000+10
using namespace std;
const int INF=0x3f3f3f3f;
priority_queue<int,vector<int>,greater<int>> u;
priority_queue<int,vector<int>,less<int>> d;
int a[N],b[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	int p=0;
	for(int i=1;i<=m;i++){
		while(p<b[i]){
			p++;
			d.push(a[p]);
			u.push(d.top());
			d.pop();
		}
		cout<<u.top()<<endl;
		d.push(u.top());
		u.pop();		
	}
	return 0;
}
/*
7 7
1 3 5 7 9 11 6

*/
