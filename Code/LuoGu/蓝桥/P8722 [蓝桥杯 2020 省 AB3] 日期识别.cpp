#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
string a[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
int main(){
	string s,m,d;
	cin>>s;
	m=s.substr(0,3);
	d=s.substr(3,5);
	for(int i=0;i<12;i++){
		if(m==a[i]){
			cout<<i+1<<" ";
			break;
		}
	}
	cout<<(d[0]-'0')*10+(d[1]-'0');
    return 0;
}

