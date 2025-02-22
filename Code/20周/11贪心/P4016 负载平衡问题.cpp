#include<bits/stdc++.h>
#define ll long long
#define N 110
using namespace std;
ll a[N]={0},s[N]={0},n,sum=0;
int main(){
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		sum+=a[i];
	} 
	sum=sum/n;
	for(ll i=1;i<=n;i++){
		a[i]-=sum;
		s[i]=s[i-1]+a[i];
	}
	sort(s+1,s+1+n);
	sum=0;
	for(ll i=1;i<=n;i++){
		sum+=abs(s[n/2+1]-s[i]);
	}
	printf("%lld",sum);
    return 0;
}

