#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	string s;
	cin>>s;
	ll cnt=0;
	for(int i=0;i<s.size()-1;i++){
		int ch[27]={0};
		ch[s[i]-'a']++;
		for(int j=i+1;j<s.size();j++){
			ch[s[j]-'a']++;
			int flag=0;
			for(int k=0;k<26;k++){
				if(ch[k]>(j-i+1)/2) {
					flag=1;
					break;
				}
			}
			if(flag==0){
				cnt++;
			}
		}
	} 
	cout<<cnt;
    return 0;
}

