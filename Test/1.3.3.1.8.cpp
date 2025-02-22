#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int a[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxn,minn;	cin>>minn>>maxn;
	if(n<=0||maxn<minn) {
		cout<<-1;
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			if(a[i]<minn||a[i]>maxn) cout<<a[i]<<" ";
		}
	}
	
	return 0;
}
