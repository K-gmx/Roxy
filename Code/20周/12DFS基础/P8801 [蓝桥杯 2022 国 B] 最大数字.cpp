#include<bits/stdc++.h>
#define ll long long
#define N QwQ
using namespace std;
char s[200]; 
ll ans;
int A,B;
void dfs(int i,ll v){
	if(s[i]){
		int d=s[i]-'0';
		int t=min(A,9-d);
		A-=t;
		dfs(i+1,v*10+d+t);
		A+=t;
		if(B>d){
			B-=(d+1);
			dfs(i+1,v*10+9);
			B+=(d+1);
		}
	}else{
		ans=max(ans,v);
	}
}
int main(){
	scanf("%s%d%d",s,&A,&B);
	dfs(0,0);
	cout<<ans;
    return 0;
}

