#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	int a,maxn=-INF,b;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(i==1) b=a;
		else{
			b=max(a,b+a);
		}
		maxn=max(maxn,b);
	} 
	cout<<maxn;
    return 0;
}

