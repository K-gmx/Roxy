#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int diff[1000011],b[1000011],a[1000011],r[1000011],l[1000011],d[1000011];
bool check(ll x){
	memset(diff,0,sizeof diff);
	for(int i=1;i<=x;i++){
		diff[l[i]]+=b[i];
		diff[r[i]+1]-=b[i];
	}
	for(int i=1;i<=n;i++){
		d[i]=d[i-1]+diff[i];
		if(d[i]>a[i]) return false;
	}
	return true;
} 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i]>>l[i]>>r[i];
    int left=1,right=m,mid;
    if(check(m)) {
    	cout<<0;
    	return 0;
	}
	while(left<=right){
		mid=(left+right)/2;
		if(check(mid)){
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	cout<<-1<<endl;
	cout<<left<<endl;
    return 0;
}

