#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,a[N]; 
bool check(int h){
	ll sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]>h) sum+=a[i]-h;
	}
	if(sum>=m) return true;
	else return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int l=0,r=1e9,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(check(mid)){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<r;
    return 0;
}
