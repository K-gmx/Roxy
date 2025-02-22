#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n/2;i++){
		if((n-i)%i==0) cnt++;
	}
	cout<<cnt;
    return 0;
}

