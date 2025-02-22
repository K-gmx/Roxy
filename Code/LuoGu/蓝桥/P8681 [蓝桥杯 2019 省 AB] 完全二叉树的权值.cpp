#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	ll a[N];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	ll k=0,l=0,r=1,maxn=-INF,flag=1;
	while(++k){
		ll sum=0;
		for(int i=l+1;i<=l+r;i++){
			sum+=a[i];
			if(i>=n) break;
		}
		l+=r;
		if(maxn<sum){
			maxn=sum;
			flag=k;
			//cout<<l<<endl;
		}
		if(l>=n) break;
		r*=2; 
	}
	cout<<flag;
    return 0;
}

