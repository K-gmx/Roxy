#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,a[N];
void find(int x){/*
	int l=1,r=n,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]<=x){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	if(a[r]!=x) {
		cout<<-1<<" ";
	}
	else {
		while(a[r-1]==a[r]){
			r--;
		}
		cout<<r<<" ";
	}*/
	int index=lower_bound(a+1,a+1+n,x)-a;
	if(a[index]!=x) cout<<-1<<" ";
	else cout<<index<<" ";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++){
		int x;	cin>>x;
		find(x);
	}
    return 0;
}

