#include<bits/stdc++.h>
#define ll long long
#define N 100010
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
ll ans=0;
int u[N],v[N];
int d[N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>u[i]>>v[i];
		d[u[i]]++;
		d[v[i]]++;
	}
	for(int i=1;i<=m;i++){
		if(d[u[i]]>1&&d[v[i]]>1){
			ans+=((d[u[i]]-1)*(d[v[i]]-1)*2);
		}
	}
	cout<<ans;
    return 0;
}

