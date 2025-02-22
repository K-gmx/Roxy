#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct data{
	ll l,r;
}a[1000005];
bool cmp(data a,data b){
	return a.r<b.r;
}
int main(){
	ll n,c;
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		scanf("%lld%lld",&a[i].l,&a[i].r);
	} 
	sort(a+1,a+1+n,cmp);
	ll sum=0,R=-1;
	for(ll i=1;i<=n;i++){
		if(R>a[i].l) continue; 
		else{
			sum++;
			R=a[i].r;
		}
	}
	printf("%lld",sum);
	return 0;
}
