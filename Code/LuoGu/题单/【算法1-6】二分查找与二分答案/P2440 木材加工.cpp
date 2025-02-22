#include<bits/stdc++.h>
#define int long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int a[N];
int n;
int k;
bool check(int x){
	/*if(x<=0) {
			cout<<0;
			exit(0);
		}*/
	//cout<<x<<endl;
	if(x==0) return true;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cnt+=a[i]/x;
	}
	if(cnt>=k) return true;
	return false;
}
signed main(){
	cin>>n;cin>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	int l=0,r=10e8,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(check(mid)){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	if(r<0) r=0;
	cout<<r;
	return 0;
}
