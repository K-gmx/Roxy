#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	if(n>=200) cout<<n-50-20;
	else if(n>=100) cout<<n-20;
	else cout<<n;
    return 0;
}

