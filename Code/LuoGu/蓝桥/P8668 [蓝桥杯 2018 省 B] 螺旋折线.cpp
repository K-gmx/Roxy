#include<bits/stdc++.h>
#define int long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int cnt=0;
int main(){
	int x,y;
	cin>>x>>y;
	int n=max(abs(x),abs(y)),d=2*n*(2*n+1);
	if(y>=0&&abs(x)<=y){
		cout<<d-3*n+x;
	}else if(x>=0&&abs(y)<=x){
		cout<<d-n-y;
	}else if(y<0&&-y>=x&&x>y){
		cout<<d+n-x;
	}else{
		cout<<d-5*n+y;
	}
    return 0;
}

