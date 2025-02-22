#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int w,n,m; 
int a1,a2,b1,b2;
int main(){
	cin>>w>>n>>m;
	if((n/w)&1){
		if(n%w==0) {
			a1=n/w;
			a2=w;
		}
		else{
			a1=n/w+1;
			a2=w-(n%w-1);
		}
	}else{
		if(n%w==0) {
			a1=n/w;
			a2=1;
		}
		else{
			a1=n/w+1;
			a2=n%w;
		}
	}
	if((m/w)&1){
		if(m%w==0) {
			b1=m/w;
			b2=w;
		}
		else{
			b1=m/w+1;
			b2=w-(m%w-1);
		}
	}else{
		if(m%w==0) {
			b1=m/w;
			b2=1;
		}
		else{
			b1=m/w+1;
			b2=m%w;
		}
	}
	cout<<abs(a1-b1)+abs(a2-b2);
    return 0;
}

