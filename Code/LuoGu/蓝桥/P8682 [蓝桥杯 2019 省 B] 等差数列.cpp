#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,a[N];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	if(a[1]==a[2]){
		cout<<n;
		return 0;
	} 
	int lim=__gcd(a[2]-a[1],a[3]-a[2]);
	for(int i=4;i<=n;i++){
		lim=__gcd(lim,a[i]-a[i-1]);
	}
	cout<<(a[n]-a[1])/lim+1;
    return 0;
}

