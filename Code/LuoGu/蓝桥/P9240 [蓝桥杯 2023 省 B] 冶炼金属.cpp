#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	double maxn=-1,minn=INF;
	for(int i=1;i<=n;i++){
		int o,x;
		cin>>o>>x;
		maxn=max(maxn,floor(o*1.0/(x+1)+1));
		minn=min(minn,floor(o*1.0/x));
	} 
	cout<<(int)maxn<<" "<<(int)minn;
    return 0;
}

