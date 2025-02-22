#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
struct peo{
	int hm;
	int nl;
}temp,a,b;
int main(){
	int n;
	cin>>n;
	int i;
	
	a.nl=0;
	b.nl=0;
	
	for(i=1;i<=(1<<(n-1));i++){
		cin>>temp.nl;
		temp.hm=i;
		if(a.nl<temp.nl){
			a=temp;
		}
	}
	for(;i<=(1<<n);i++){
		cin>>temp.nl;
		temp.hm=i;
		if(b.nl<temp.nl){
			b=temp;
		}
	}
	if(a.nl>b.nl){
		cout<<b.hm;
	}else{
		cout<<a.hm;
	}
    return 0;
}

