#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
ll n,a[N],k,b[N],cnt=0,c[N];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
		//if(a[i]%k==0)cnt++;
		c[b[i]%k]++;
	}
	c[0]++;
	for(int i=0;i<=k-1;i++){
		if(c[i]!=0) cnt+=c[i]*(c[i]-1)/2;
		//cout<<c[i];
	}
	cout<<cnt;
    return 0;
}
//0 1 2 3 4  5
//0 1 3 6 10 15
//0 1 1 0 0  1
 
