#include <bits/stdc++.h>
#define ll long long 
#define N 10010
using namespace std;
ll a[N],sum=0,n;
ll qiuhe();
int main(){
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	printf("%lld",qiuhe());
	return 0;
}
ll qiuhe(){
	
	int af=1,ae=n;
	int bf=1,be=1;
	sort(a+1,a+1+n);
	if(n==1){
		return a[1]; 
	}
	a[1]=a[1]+a[2];
	af=3;
	sum+=a[be];
	while(bf<n-1){
		if((a[af]<=a[bf])&&(af<=ae)){
			if((a[af+1]<=a[bf])&&(af+1<ae)){
				a[++be]=a[af]+a[af+1];
				af+=2;
				sum+=a[be];
			}else{
				a[++be]=a[af]+a[bf];
				af++;bf++;
				sum+=a[be];
			}
		}
		else{
			if((a[af]<=a[bf+1])&&(af<=ae)&&(bf+1<=be)||(be==bf)&&(af<=ae)){
				a[++be]=a[af]+a[bf];
				af++;bf++;
				sum+=a[be];
			}else{
				a[++be]=a[bf]+a[bf+1];
				bf+=2;
				sum+=a[be];
			}
		}
	}
	
	return sum;
}
