#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	string x;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		int l=x.length();
		if(l>10){
			cout<<x[0]<<l-2<<x[l-1]<<endl;
		}else{
			cout<<x<<endl;
		}
		
	}
    return 0;
}

