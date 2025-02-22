#include<bits/stdc++.h>
#define ll long long
#define N 100010
using namespace std;
int main(){
	ll n,m,a[N];
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(ll i=1;i<=m;i++){
		int flag=1;
		scanf("%d",&flag);
		if(flag==2){
			ll l,r;
			scanf("%lld%lld",&l,&r);
			ll temp=0,max=0;
			for(ll j=l;j<=r;j++){
				if(temp+a[j]<0){
					temp=0;
				}else{
					temp+=a[j];
					if(temp>max)max=temp;
				}
			}
			cout<<max<<endl;
		}else{
			ll l,r,x;
			scanf("%lld%lld%lld",&l,&r,&x);
			for(ll j=l;j<=r;j++)a[j]+=x;
		}
	}
    return 0;
}

