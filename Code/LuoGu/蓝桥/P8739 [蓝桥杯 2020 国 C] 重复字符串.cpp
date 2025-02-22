#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int k,cnt=0;
string s;
int sum[N];
int main(){
	cin>>k>>s;
	int len=s.size()/k;
	if(s.size()%k!=0) {
		cout<<-1;
		return 0;
	}
	for(int i=0;i<len;i++){
		memset(sum,0,sizeof(sum));
		int maxn=0;
		for(int j=i;j<s.size();j+=len){
			sum[s[j]]++;
		}
		for(int c='a';c<='z';c++){
			maxn=max(maxn,sum[c]);
		}
		cnt+=(k-maxn);
	}
	cout<<cnt;
    return 0;
}

