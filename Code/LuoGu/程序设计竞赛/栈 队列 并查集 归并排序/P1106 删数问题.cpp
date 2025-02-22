#include<bits/stdc++.h>
#define ll long long
#define N 500000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,k;
string str;
int st[N],top=0;
int main(){
	memset(st,0,sizeof st);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>str>>k;
    int t=0;
    while(str[t]=='0')t++;
    str=str.substr(t);
    str="0"+str;
    for(int i=1;i<=str.size()-1;i++){
    	int num=str[i]-'0';
    	while(st[top-1]>num&&k&&top){
    		top--;
    		k--;
		}
		st[top++]=num;
	}
	while(k--){
		top--;
	}
	t=0;
	while(st[t]==0)t++;
	for(int i=t;i<top;i++){
		cout<<st[i];
	}
	if(t>=top) cout<<0;
    return 0;
}
