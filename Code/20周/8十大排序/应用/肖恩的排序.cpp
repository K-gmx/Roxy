#include<bits/stdc++.h>
#define ll long long int 
const int N=1e5+10,mod=1e9+7;
using namespace std;

int main(){
	ll a[N]={0},b[N]={0},n;
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(ll i=1;i<=n;i++){
		scanf("%lld",&b[i]);
	}
	sort(a+1,a+n+1,greater<int>());
	sort(b+1,b+n+1,greater<int>());
	ll ans=1,j=1,sum=1;
	for(ll i=1;i<=n-1;i++){
		while(a[j+1]>b[i]&&j<=n){
			sum++;
			j++;
		}
		ans*=sum--;
		ans%=mod;
	}
	printf("%lld",ans);
	return 0;
} 

/*

8 6 5 3 2 
5 4 3 2 1

*/

