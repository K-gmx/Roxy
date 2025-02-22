#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	ll cnt=0,s=0;
	for(int i=1;i<=n;i++){
		int j=i;
		while(j%5==0){
			s++;
			j/=5;
		}
		cnt+=s;
		//cout<<s<<" "<<endl;
	}
	cout<<cnt;
    return 0;
}
/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
0 0 0 0 1 1 1 1 1 2  2  2  2  2  3

*/
