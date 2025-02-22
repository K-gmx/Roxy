#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	ll n;	scanf("%lld",&n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			printf("%d",n/i);
		}
	} 
    return 0;
}

