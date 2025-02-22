#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	string s;cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]<='z'&&s[i]>='a'){
			cout<<(char)(s[i]-('a'-'A'));
		}else{
			cout<<s[i];
		}
	}
    return 0;
}

