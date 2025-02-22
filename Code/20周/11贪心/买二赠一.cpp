#include <bits/stdc++.h>
#define ll long long int
#define N 500010
using namespace std;
ll a[N],flag[N];
int main(){
	ll n;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+1+n);
	ll last=n,r=n,cnt=0,ans=0,low=a[n];
	for(int i=n;i>=1;i--){
		/*for(int i=1;i<=n;i++){
		printf("%lld ",flag[i]);
	}printf("\n");*/
		if(!flag[i]){
			cnt++;ans+=a[i];flag[i]=1;low=a[i];//printf("%lld %lld ",a[i],cnt);
		}
		
		if(cnt>=2){
			cnt=0;flag[i]=1;
			int x=lower_bound(a+1,a+last,low/2)-a;
			if(a[x]>low/2){
				x--;
			}
			if(x>=1){
				flag[x]=1;last=x-1;
			}//printf("%lld %lld %lld\n",a[x],last,x);
		}
	}
	/*for(int i=1;i<=n;i++){
		printf("%lld ",flag[i]);
	} */
	printf("\n%lld",ans);
	return 0;
}//1 4 2 8 5 7 1
//1 1 2 4 5 7 8 
