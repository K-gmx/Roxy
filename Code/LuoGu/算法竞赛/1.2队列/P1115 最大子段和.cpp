#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;	cin>>n;
	ll maxn=-INF;
	ll sum=0;
	int p=1,a=1,b=1;
	for(int i=1;i<=n;i++){
		int t;	cin>>t;
		sum+=t;
		if(sum>maxn){
			maxn=sum;
			a=p;
			b=i;
		}
		if(sum<0){
			sum=0;
			p=i+1;
		}
	}
	//cout<<a<<"  "<<b<<endl;
	cout<<maxn<<endl;
	
	return 0;
}
