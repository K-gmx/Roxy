#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll a[200009],n,x,sum=0;
	scanf("%lld%lld",&n,&x);
	scanf("%lld",&a[1]);
	for(int i=2;i<=n;i++){
		scanf("%lld",&a[i]);
		ll ans=a[i]+a[i-1];
		if(ans>x){
			sum+=ans-x;
			if(a[i]-(ans-x)<0){
				a[i]=0;
				a[i-1]=ans-x-a[i];
			}else{
				a[i]-=ans-x;
			}
		}
	}
	printf("%lld",sum);
	
	return 0;
}
