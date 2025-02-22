#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int p;
void js(ll x){
	if(x/p<1){
		if(x<10) cout<<x;
		else cout<<(char)(x-10+'A');
	}else{
		int a,b;
		a=x/p;
		b=x%p;
		js(a);
		if(b<10) cout<<b;
		else cout<<(char)(b-10+'A');
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>p;
	for(int i=1;i<=p-1;i++){
		for(int j=1;j<=i;j++){
			if(i<10) cout<<i;
			else cout<<(char)(i-10+'A');
			if(j<10) cout<<"*"<<j<<"=";
			else cout<<"*"<<(char)(j-10+'A')<<"=";
			js(1ll*i*j);
			cout<<" ";
		}
		cout<<endl;
	}
    return 0;
}

