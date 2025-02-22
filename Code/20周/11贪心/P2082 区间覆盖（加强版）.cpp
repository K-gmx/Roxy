#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct data{
	ll l,r;
}a[100005];
bool cmp(data a,data b){
	return a.l<b.l;
}
int main(){
	ll n,c;
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		scanf("%lld%lld",&a[i].l,&a[i].r);
	} 
	sort(a+1,a+1+n,cmp);
	ll sum=0,end=a[1].r,star=a[1].l;
	for(ll i=1;i<=n;i++){
		if(end<a[i].l){
			sum+=end-star+1;
			star=a[i].l;
			end=a[i].r;
		}
		else{
			if(end>a[i].r) continue; 
			else{
				end=a[i].r;
			}
		}
	}
	printf("%lld",sum+(end-star)+1);
	return 0;
}
