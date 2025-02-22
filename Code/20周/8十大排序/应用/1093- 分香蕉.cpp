#include<bits/stdc++.h>
#define ll long long int 
const int N=1e5+10;
using namespace std;

struct node{
	ll num;
	ll t;
	ll b;
}mok[N];

bool cmp1(node a,node b){
	return a.t>b.t;
}
bool cmp2(node a,node b){
	return a.num<b.num;
}

int main(int argc, char *argv[])
{
	ll n,m,a[N];
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(ll i=1;i<=m;i++){
		mok[i].num=i;
		scanf("%lld",&mok[i].t);
	}
	
	sort(mok+1,mok+m+1,cmp1);
	sort(a+1,a+n+1,greater<int>());
	ll k=0;
	for(ll i=1;i<=n;i++){
		mok[++k].b+=a[i];
		if(k>=m)k=0;
	}
	sort(mok+1,mok+m+1,cmp2);
	for(ll i=1;i<=m;i++){
		printf("%lld ",mok[i].b);
	}
	return 0;
}
