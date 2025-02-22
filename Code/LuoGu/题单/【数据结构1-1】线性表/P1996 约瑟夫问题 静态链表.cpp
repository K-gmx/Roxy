 #include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int node[150];
int main(){
	int n,m;
	int now=1,pre=1;
	cin>>n>>m;
	for(int i=1;i<=n-1;i++) node[i]=i+1;
	node[n]=1;
	while((n--)!=1){
		for(int i=1;i<m;i++) {
			pre=now;
			now=node[now];
		}
		cout<<now<<" ";
		node[pre]=node[now];
		now=node[now];
	}
	cout<<now;
	return 0;
}
