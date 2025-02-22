#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int p[N];
queue<int >q;
queue<int >Q[301];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>p[i];
	int a,k;	cin>>k;
	while(k--){
		string s;	cin>>s;
		
		if(s=="push"){
			cin>>a;
			if(Q[p[a]].size()==0){
				q.push(p[a]);
			}
			Q[p[a]].push(a);
		}else{
			cout<<Q[q.front()].front()<<endl;
			Q[q.front()].pop();
			if(Q[q.front()].size()==0){
				q.pop();
			}
		}
		
	}
	
	
	return 0;
}
