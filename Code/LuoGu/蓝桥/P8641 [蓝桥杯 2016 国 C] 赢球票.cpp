#include<bits/stdc++.h>
#define ll long long
#define N 1000
using namespace std;
const int INF=0x3f3f3f3f;
int a[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n;	cin>>n;
	int maxn=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(a[i],maxn);
	}
	ll sum=0;
	for(int i=1;i<=n;i++){
		int cnt=1,k=i,m=n;
		int f[N]={0};
		ll s=0;
		while(true){
			if(f[k]==0){
				if(a[k]==cnt){
					f[k]=1;s+=a[k];
					cnt=0;
					m--;
					
				}
				cnt++;
			}
			k++;
			sum=max(s,sum);
			if(cnt>maxn||m<=0) break;
			
			if(k==n+1) k=1; //cout<<1;
		}
	}
	cout<<sum;
    return 0;
}

