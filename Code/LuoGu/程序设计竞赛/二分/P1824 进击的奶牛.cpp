#include<bits/stdc++.h>
#define ll long long
#define N 200005+10
using namespace std;
const int INF=0x3f3f3f3f;
int a[N],c,n; 
int check(int k){
	int pos=1,cnt=c;
	for(int i=1;i<=cnt-1;i++){
		pos=lower_bound(a+1,a+1+n,a[pos]+k)-a;
		if(pos==n+1) return 0;
	}
	return 1;
}
int main(){
	//ios::sync_with_stido(false);
	//cin.tie(0);cout.tie(0);
	cin>>n>>c;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int l=1,r=1e9,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(check(mid)){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<r<<endl;
    return 0;
}


