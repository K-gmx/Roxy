#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
//int a[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;	cin>>n;
	int cnt=0;
	int maxn=0;
	for(int i=1;i<=n;i++){
		int t;	cin>>t;
		if(t==0){
			//a[t]++;
			cnt++;
		}
		else maxn=max(maxn,t);
	}
	cout<<n-(cnt-maxn);
	return 0;
}
