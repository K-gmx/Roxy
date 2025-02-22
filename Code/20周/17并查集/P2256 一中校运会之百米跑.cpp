#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
map<string,string>mp; 
int n,m,k;
string f(string s){
	if(mp[s]!=s) mp[s]=f(mp[s]);
	return mp[s];
}
int main(){
	cin>>n;cin>>m;
	for(int i=1;i<=n;i++) {
		string s;
		cin>>s;
		mp[s]=s;
	}
	
	for(int i=1;i<=m;i++){
		string s1,s2;
		cin>>s1>>s2;
		mp[f(s1)]=f(s2);
	} 
	cin>>k;
	for(int i=1;i<=k;i++){
		string s1,s2;
		cin>>s1>>s2;
		if(mp.count(s1)==0||mp.count(s2)==0) {
			cout<<"No."<<endl;
			continue;
		}
		if(f(s1)==f(s2)){
			cout<<"Yes."<<endl;
		}else{
			cout<<"No."<<endl;
		}
	}
    return 0;
}

