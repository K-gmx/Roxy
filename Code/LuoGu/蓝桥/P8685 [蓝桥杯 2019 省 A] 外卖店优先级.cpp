#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,t; 
priority_queue< int, vector<int> ,greater<int> > h[N];
int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(0);cout.tie(0);
	cin>>n>>m>>t;
	
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		h[y].push(x);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		bool in=false;
		int last=0;
		int pri=0;
		while(!h[i].empty()){
			int x=h[i].top();
			h[i].pop();
			if(x!=last) pri-=(x-last-1);
			last=x;
			if(pri<0) pri=0;
			if(in&&pri<=3) in=false;
			pri+=2;
			if(pri>5) in=true;
		}
		if(t!=last) pri-=(t-last);
		if(pri<=3) in=false;
		if(in) cnt++;
	}
	cout<<cnt;
    return 0;
}

