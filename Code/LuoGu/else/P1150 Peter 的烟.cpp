#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int n,k;
int main(){
	cin>>n>>k;
	ll sum=0,cnt=0;
	while(n!=0){
		sum+=n;
		cnt+=n;
		n=cnt/k;
		cnt=cnt%k;
		//cout<<sum<<" "<<n<<" "<<cnt<<endl;
	}
	cout<<sum+n;
    return 0;
}

