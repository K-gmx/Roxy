#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
string s1,s2; 
int main(){
	cin>>s1>>s2;
	int k=0;
	for(int i=0;i<s1.size();i++){
		if(s2[k]==s1[i]) k++;
		if(k==s2.size())break;
	}
	cout<<k;
    return 0;
}

