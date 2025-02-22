#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
bool f[1003]={0};
queue<int> q;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;	cin>>m>>n;
	int cnt=0;
	while(n--){
		int x;	cin>>x;
		if(!f[x]){
			f[x]=1;
			cnt++;
			q.push(x);
		}
		if(q.size()>m){
			f[q.front()]=0;
			q.pop();
		}
	}
	cout<<cnt;
	return 0;
}
