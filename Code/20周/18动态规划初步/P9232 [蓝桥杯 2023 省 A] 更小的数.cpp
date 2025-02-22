#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int dp[5100][5100];
int main(){
	string s;
	cin>>s;
	int ans=0;
	for(int k=1;k<s.size();k++){
		for(int i=0;i+k<s.size();i++){
			int j=i+k;
			if(s[i]>s[j]) dp[i][j]=1;
			if(s[i]<s[j]) dp[i][j]=0;
			if(s[i]==s[j])dp[i][j]=dp[i+1][j-1];
			if(dp[i][j]==1) ans++;
		}
	}
	cout<<ans;
    return 0;
}
/*
for(int i=0;i<s.size()-1;i++){
		for(int j=i+1;j<s.size();j++){
			string temp=s;
			reverse(temp.begin()+i,temp.begin()+j+1);	
			if(temp<s) ans++;
		}
	}
*/
