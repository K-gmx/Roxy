#include<bits/stdc++.h>
#define ll long long
#define N 200005+10
using namespace std;
const int INF=0x3f3f3f3f;
ll n,a[N],b[N];
ll ans=0;
int main(){
	cin>>n;
	b[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	for(int i=1;i<=n-1;i++){
		ans+=a[i]*(b[n]-b[i]);
	}
	cout<<ans;
    return 0;
}

