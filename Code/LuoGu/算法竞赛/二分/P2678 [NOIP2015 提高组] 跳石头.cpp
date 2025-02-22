#include<bits/stdc++.h>
#define ll long long
#define N 50000+10
using namespace std;
const int INF=0x3f3f3f3f;
int L,n,m;
int a[N];
bool check(int x){
	ll cnt=0;
	ll index=0;
	while(index!=n+1){
		int find=lower_bound(a+index,a+n+1,a[index]+x)-a;
		
		if(find==n+1&&a[find]-a[index]<x){
			if(a[find]-a[index]>=x) return 1;
			else{
				while(a[find]-a[index]<x) {
					index--;
					cnt++;
					if(cnt>m) return 0;
				}
			}
			return 1;
		}
		if(a[find]-a[index]<x) find++;
		cnt+=find-index-1;
		index=find;//cout<<" "<<cnt<<endl;
		if(cnt>m) return 0;
	}
	return 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>L>>n>>m;
    int minn=INF;
    a[0]=0;
    for(int i=1;i<=n;i++) {
    	cin>>a[i];
    	minn=min(minn,a[i]-a[i-1]);
	}
	a[n+1]=L;
    int l=minn,r=L,mid;
    while(l<=r){
    	mid=(l+r)/2;
    	if(check(mid)){
    		l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<r;
	//cout<<check(7);
    return 0;
}
