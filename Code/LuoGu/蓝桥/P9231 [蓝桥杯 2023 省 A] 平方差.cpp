#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;/*
bool check(int x){
	if(x&1) return true;
	if(x%4==0) return true;
	return false;
}*/
int main(){
	ll l,r,cnt=0;
	ll x=-1;
	cin>>l>>r;
	for(ll i=l;i<=l+r;i++){
		if(i%4==0){
			x=i;
			break;
		}
	}
	cnt+=((r+1)/2)-l/2;
	if(x!=-1){
		cnt+=(r-x)/4+1;
	}
	cout<<cnt;
    return 0;
}

