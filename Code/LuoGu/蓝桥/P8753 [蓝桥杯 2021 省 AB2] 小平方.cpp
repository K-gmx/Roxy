#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	double x;
	cin>>x;
	int cnt=0;
	for(int i=1;i<=x-1;i++){
		if(i*i%(int)x-x/2<0) cnt++;
	}
	cout<<cnt;
    return 0;
}

