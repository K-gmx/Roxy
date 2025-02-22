#include<bits/stdc++.h>
#define ll long long
#define N 1000000+10
using namespace std;
const int INF=0x3f3f3f3f;
string s,a;
int n;
int nexts[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>a>>s;
	n=s.size();
	int la=a.size();
	nexts[0]=0;
	int j=0;
	for(int i=1;i<n;i++){
		while(j>0&&s[i]!=s[j]) j=nexts[j-1];
		if(s[j]==s[i]) j++;
		nexts[i]=j;
	}
	j=0;
	for(int i=0;i<la;i++){
		while(j&&s[j]!=a[i]) j=nexts[j-1];
		if(a[i]==s[j]) j++;
		if(j==n){
			cout<<i-n+2<<endl;
			j=nexts[j-1];
		}
		
	}
	for(int i=0;i<n;i++) cout<<nexts[i]<<" ";
	return 0;
}
//  abcdaabcabcd
