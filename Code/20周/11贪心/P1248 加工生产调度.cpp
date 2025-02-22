#include<bits/stdc++.h>
#define ll long long
#define N 10010
using namespace std;
struct node{
	ll a,b,i,d;
	bool operator<(const node &x) const{
		if(d==x.d){
			if(d<0) return a<x.a;
			else return x.b<b;
		}
		return x.d>d;
	}
}c[N];
ll a[N],b[N];
int main(){
	ll n;
	scanf("%d",&n);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&c[i].a);
		c[i].i=i;
	}
	for(ll i=1;i<=n;i++){
		scanf("%lld",&c[i].b);
		if(c[i].a>c[i].b) c[i].d=1;
		else if(c[i].a==c[i].b) c[i].d=0;
		else c[i].d=-1;
	}
	sort(c+1,c+1+n);
	ll a=c[1].a;
	ll b=c[1].b+c[1].a;
	for(ll i=2;i<=n;i++){
		b=max(c[i].a+a,b)+c[i].b;
		a=a+c[i].a;
	}
	printf("%lld\n",b);
	for(ll i=1;i<=n;i++){
		printf("%lld ",c[i].i);
	}
    return 0;
}

