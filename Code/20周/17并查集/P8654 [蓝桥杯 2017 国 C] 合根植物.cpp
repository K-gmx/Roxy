#include<bits/stdc++.h>
#define ll long long
#define N 1000000+2000
using namespace std;
const int INF=0x3f3f3f3f;
int s[N];
int find_set(int x){
	if(x!=s[x]) s[x]=find_set(s[x]);
	return s[x];
}
void merge_set(int x,int y){
	s[find_set(x)]=find_set(y);
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=N;i++) s[i]=i;
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		merge_set(x,y);
	}
	int cnt=0;
	for(int i=1;i<=n*m;i++){
		if(i==s[i]) cnt++;
	}
	cout<<cnt;
    return 0;
}

