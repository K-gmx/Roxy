#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	string s;
	int ch[5]={0};
	cin>>s;
	for(int i=0;i<s.size();i++){
		ch[s[i]-'A']++;
	}
	if(ch[0]>0&&ch[1]==4-ch[0]) cout<<"I'm so happy.";
	else if(ch[3]!=0) cout<<"Never give up.";
	else cout<<"This is ok.";
    return 0;
}

