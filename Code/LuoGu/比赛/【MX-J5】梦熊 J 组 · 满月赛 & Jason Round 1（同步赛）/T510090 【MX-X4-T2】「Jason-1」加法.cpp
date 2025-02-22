#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		if(a==b||a==0||b==0) cout<<0<<endl;
		else if((a<0&&b==1)||(a==1&b<0)){
			cout<<0<<endl;
		}else if(__gcd(abs(a),abs(b))==1){
			cout<<min(min(abs(a),abs(b)),abs(abs(a)-abs(b)))<<endl;
		}else{
			cout<<0<<endl;
		}
	}
	
	return 0;
}
