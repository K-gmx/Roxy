#include<bits/stdc++.h>
#define ll long long int 
const int N=1e3+10;
using namespace std;

struct node{
	ll num;
	ll t;
}t[N];

bool cmp(node a,node b){
	return a.t<b.t;
}

int main(int argc, char *argv[])
{
	ll n,sum=0,k=0;
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		t[i].num=i;
		scanf("%lld",&t[i].t);
	}
	sort(t+1,t+n+1,cmp);
	for(ll i=1;i<=n;i++){
		printf("%lld ",t[i].num);
		k+=t[i].t;
		sum+=k;
	}
	printf("\n");
	printf("%.2f",(sum-k)*1.0/n);
	return 0;
}
