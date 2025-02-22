#include<bits/stdc++.h>
#define ll long long
#define M 100000000
#define N 100000
using namespace std;
const int INF=0x3f3f3f3f;
/*
int numsum(ll x){
	int k=x;
	ll sum=0;
	while(k!=0){
		sum+=k%10;
		k/=10;
	}
	return sum;
}
bool solve(int x,int k){
	int a=1;
	k/=2;
	while(k!=0){
		k--;
		a*=10;
	}
	if(numsum(x%a)==numsum(x/a)) return true;
	return false;
}

int cnt;
void dfs(int k,int x){
	if(x>=100) return ;
	if(k==30){
		if(x==70) cnt++;
		else return ;
	}else{
		dfs(k+1,0);
		dfs(k+1,x+10);
	}
}*/
int main(){
/*
	ll cnt=0;
	for(ll i=1;i<=M;i++){
		int flag=0;
		ll j=i;
		while(j!=0){
			j/=10;
			flag++;
		}
		if(flag&1) continue;
		if(solve(i,flag)) cnt++;
	}
	cout<<cnt;
	//cout<<solve(1322,4);

	dfs(0,0);
	cout<<cnt;
*/
 cin >> pid;
    if(pid == 'A')
        cout<<4430091;
    else
        cout<<4165637;
    return 0;
}

