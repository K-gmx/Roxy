#include<bits/stdc++.h>
#define int long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int a,b;
int ans;
int exgcd(int a,int b,int& x,int& y){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	ans=exgcd(b,a%b,x,y);
	int temp=y;    
    y=x-(a/b)*y;
    x=temp;
    return ans;
	
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x,y;
    cin>>a>>b;
    exgcd(a,b,x,y);
    x=(x%b+b)%b;
    cout<<x;
    return 0;
}

