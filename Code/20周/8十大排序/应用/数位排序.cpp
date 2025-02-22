#include<bits/stdc++.h>
#define ll long long int 
const int N=1e6+10;
using namespace std;

struct nums{
	ll a,b;
}num[N];

ll sumnum(ll num){
	if(num!=0) return sumnum(num/10)+num%10;
	else return 0;
}

bool cmp(nums a,nums b){
	if(a.b==b.b)
	{
		return a.a<b.a;
	}
	else
	{
		return a.b<b.b;
	}
}

int main(int argc, char *argv[])
{
	ll n,m;
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++){
		num[i].a=i;
		num[i].b=sumnum(i);
	}
	sort(num+1,num+n+1,cmp);
	/*for(ll i=1;i<=n;i++){
		printf("%lld ",num[i].a);
	}*/
	printf("%lld",num[m].a);
	return 0;
}
