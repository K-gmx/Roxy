#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int l=1,r=10000000,mid,a[N],k,n; 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		double x;
		cin>>x;
		a[i]=x*100;
	}
	ll sum=0;
	while(l<=r){
		mid=(r+l)/2;
		sum=0;
		for(int i=1;i<=n;i++){
			if(a[i]>=mid) sum+=(int)(a[i]/mid);
		}
		if(sum>=k){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	printf("%.2f",r*1.0/100);
    return 0;
}

