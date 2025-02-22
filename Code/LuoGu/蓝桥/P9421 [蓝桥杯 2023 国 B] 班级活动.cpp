#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int a[N]={0};
int main(){
	int n;	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	ll c1=0,c2=0,ans=0;
	for(int i=1;i<=N;i++){
		if(a[i]!=2&&a[i]!=0) {
			if(a[i]==1) {
				c2++;
			}
			else{
				c1+=a[i]-2;
			}
		}
	}
	if(c1>=c2){
		//ans+=c2;
		//c1-=c2;
		ans+=c1;
	}else{
		ans+=c1;
		c2-=c1;
		ans+=(c2/2);
	}
	cout<<ans;
    return 0;
}

