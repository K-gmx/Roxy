#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n;cin>>n;
	int maxn=-1,minn=INF;
	double sum=0;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		maxn=max(maxn,a);
		minn=min(minn,a);
		sum+=a;
	}
	sum/=n;
	sum=(int)(sum*100+0.5);
	sum=sum/100;
	cout<<maxn<<endl;
	cout<<minn<<endl;
	cout<<sum<<endl;
    return 0;
}

