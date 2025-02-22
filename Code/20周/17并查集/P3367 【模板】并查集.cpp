#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int s[N];
int Find(int x){
	if(x!=s[x]) s[x]=Find(s[x]);
	return s[x];
}
int main(){
	int n,m;
	cin>>n>>m; 
	for(int i=1;i<=n;i++) s[i]=i;
	for(int i=1;i<=m;i++){
		int op,x,y;
		cin>>op>>x>>y;
		if(op==1){
			s[Find(x)]=Find(y);
		}
		if(op==2){
			if(Find(x)==Find(y)) cout<<"Y"<<endl;
			else cout<<"N"<<endl;
		}
	}
    return 0;
}
