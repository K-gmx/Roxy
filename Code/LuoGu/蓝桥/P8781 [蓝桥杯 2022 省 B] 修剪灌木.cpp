#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
ll a[N];
int main(){
	int n;	cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=max((i-1)*2,(n-i)*2);
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
    return 0;
}

