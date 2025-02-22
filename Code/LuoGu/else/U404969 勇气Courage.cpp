#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
unsigned __int128 k(int n){
	unsigned __int128 sum=1,t=2;
	if(n<=0) return 1;
	while(n!=0){
		if(n&1){
			n--;
			sum*=t;
		}
		n/=2;
		t*=t;
	}
	return sum;
}
int main(){
	int n,cnt=0;
	int t;
	cin>>t>>n;
	unsigned __int128 x=t;
	if(x==2&&n==1||x==2&&n==2){
		cout<<n-1;
		return 0;
	}else if(x==2){
		cout<<"inf";
		return 0;
	}
	unsigned __int128 sum=k(n);
	while(1){
		x*=x;
		cnt++;
		if(x>=sum) {
			//cout<<sum<<endl;
			cout<<cnt;
			
			return 0;
		}
		x/=2;
	}
	//cout<<sum;
    return 0;
}
