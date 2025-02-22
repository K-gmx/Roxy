#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int a[5]={2,0,1,9};
bool check(int x){
	if(x==0) return false;
	for(int i=0;i<4;i++){
		if(x%10==a[i]) return true;
	}
	return check(x/10);
}
int main(){
	int n;
	cin>>n;
	ll ans=0;
	for(int i=1;i<=n;i++){
		if(check(i)) {
			ans+=i;
			//cout<<i<<endl;
		}
	}
	cout<<ans;
    return 0;
}

