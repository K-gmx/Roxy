#include<bits/stdc++.h>
#include<string>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n,x=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(s=="++X"||s=="X++")x++;
		else if(s=="X--"||s=="--X")x--;
	}
	cout<<x;
    return 0;
}

