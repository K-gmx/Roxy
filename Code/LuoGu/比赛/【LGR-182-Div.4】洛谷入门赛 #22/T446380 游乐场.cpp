#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n,cnt=0,sum=0,last=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x-last+sum>50) sum=50;
		else sum+=x-last;
		//cout<<sum<<endl;
		last=x;
		cnt+=sum/8;
		sum%=8;
	}
	cout<<cnt;
    return 0;
}

