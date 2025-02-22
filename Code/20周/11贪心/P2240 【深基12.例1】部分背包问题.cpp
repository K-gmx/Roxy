#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct gold{
	double w,v,p;
}a[105];
bool cmp(gold a,gold b){
	return a.p>b.p;
}
int main(){
	ll n,c;
	double sum=0;
	scanf("%lld%lld",&n,&c);
	for(ll i=1;i<=n;i++){
		scanf("%lf%lf",&a[i].w,&a[i].v);
		a[i].p=a[i].v/a[i].w;
	} 
	sort(a+1,a+1+n,cmp);
	for(ll i=1;i<=n;i++){
		if(a[i].w>=c){
			sum+=c*a[i].p;
			break; 
		}
		else{
			sum+=a[i].v;
			c-=a[i].w;
		}
	}
	printf("%.2f",sum);
	return 0;
}
