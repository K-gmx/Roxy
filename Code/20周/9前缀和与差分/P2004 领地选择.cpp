#include <bits/stdc++.h>
#define ll long long int
ll a[1010][1010]={0};
ll b[1010][1010]={0};
using namespace std;
int main(){
	ll n,m,c;
	scanf("%lld%lld%lld",&n,&m,&c);
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			b[i][j]=a[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
		}
	}
	ll x=1,y=1,ans=b[c][c]-b[1][c]-b[c][1]+b[1][1];
	for(ll i=1;i<=n-c+1;i++){
		for(ll j=1;j<=n-c+1;j++){
			ll sum=b[i-1][j-1]+b[i+c-1][j+c-1]-b[i-1][j+c-1]-b[i+c-1][j-1];
			if(ans<sum){
				ans=sum;
				x=i;y=j;
			}
		}
	}
	/*for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			printf("%4lld",b[i][j]);
		}
		printf("\n");
	}*/
	printf("%lld %lld",x,y);
	return 0;
}

  /* 1   3   6   7
   0  11  14  17
   2  13  17  21*/
