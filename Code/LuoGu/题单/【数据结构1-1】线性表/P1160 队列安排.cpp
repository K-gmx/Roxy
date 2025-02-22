#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
list<int>::iterator item[N];
bool f[N]={0};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n; cin>>n;
	list<int> l; 
	int temp; l.push_back(1); item[1]=l.begin();
	list<int>::iterator it=l.begin();
	for(int i=2;i<=n;i++){
		int x,t; cin>>x>>t;
		it=item[x];
		if(t) it++;
		item[i]=l.insert(it,i);
	}
	int m;cin>>m;//cout<<l.size()<<endl;
	for(int i=1;i<=m;i++){
		int x; cin>>x;
		if(!f[x]){//cout<<(*it)<<endl;
			l.erase(item[x]);
			n--;
			f[x]=1;
		}
	}
	it=l.begin();
	for(int i=1;i<=n;i++) {
		cout<<(*it)<<" ";
		it++;
	}
	return 0;
}
