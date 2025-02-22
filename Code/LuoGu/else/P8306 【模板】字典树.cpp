#include<bits/stdc++.h>
#define ll long long
#define N 3000005
using namespace std;
const int INF=0x3f3f3f3f;
int t[N][65];
int n,m;
int id=0;
int cnt[N];
void insert(string s){
	int len=s.size();
	int p=0;
	for(int i=0;i<len;i++){
		int x;
		if(s[i]>='a'&&s[i]<='z') x=s[i]-'a';
		else if(s[i]>='A'&&s[i]<='Z')x=s[i]-'A'+26;
		else x=s[i]-'0'+52;
		if(t[p][x]==0) t[p][x]=++id;
		p=t[p][x];cnt[p]++;
	}
	
}
int find(string s){
	int len=s.size();
	int p=0,c=0;
	for(int i=0;i<len;i++){
		int x;
		if(s[i]>='a'&&s[i]<='z') x=s[i]-'a';
		else if(s[i]>='A'&&s[i]<='Z')x=s[i]-'A'+26;
		else x=s[i]-'0'+52;

		if(t[p][x]==0) return 0;
		//c+=cnt[p];
		p=t[p][x];
	}
	return cnt[p];
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int T;
	cin>>T;
	while(T--){
		cin>>n>>m;
        for(int i=0;i<=id;i++)
            for(int j=0;j<=65;j++)
                t[i][j]=0;
        for(int i=0;i<=id;i++)
            cnt[i]=0;
		id=0;
		for(int i=1;i<=n;i++){
			string s;
			cin>>s;
			insert(s);
		}
		for(int i=1;i<=m;i++){
			string s;
			cin>>s;
			cout<<find(s)<<endl;
		}
	}
	return 0;
}
