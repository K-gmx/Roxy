#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	ll a,b,n;
	cin>>a>>b>>n;
	ll s=a*5+b*2;
	ll w=n/s,d=n%s;
	if(d>a*5){
		d-=a*5;
		int i=1;
		for(i=1;i<=2;i++){
			d-=b;
			if(d<=0) break;
		}
		d=i+5;
	}else{
		int i=1;
		for(i=1;i<=5;i++){
			d-=a;
			if(d<=0) break;
		}
		d=i;
	}
	cout<<w*7+d;
    return 0;
}

