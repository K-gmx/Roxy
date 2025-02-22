#include<bits/stdc++.h>
#define ll long long
#define N 200010
using namespace std;
double a[N],b[N],n,p;
int check(double ans){
	double sum=0,q=p*ans;
	for(int i=1;i<=n;i++){
		if(a[i]*ans<=b[i]) continue;
		else{
			sum+=a[i]*ans-b[i];
		}
	}
	return sum<=q;
} 
int main(){
	double sum=0;
	scanf("%lf%lf",&n,&p);
	for(int i=1;i<=n;i++){
		scanf("%lf%lf",&a[i],&b[i]);
		sum+=a[i];
	}
	if(sum<=p){
		printf("-1");
		return 0;
	}
	double l=0,r=1e10,mid;
	while(r-l>1e-6){
		mid=(l+r)/2;
		if(check(mid)){
			l=mid;
		}else{
			r=mid;
		}
	}
	cout<<l;
    return 0;
}

