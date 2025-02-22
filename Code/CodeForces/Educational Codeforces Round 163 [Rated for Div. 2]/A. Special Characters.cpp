#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
void solve(int n){
	int flag=1;
	int cnt=(int)'A';
	int na=cnt;
	for(int i=1;i<=n;i++){
		if(flag==3){
			flag=1;cnt++;
		} 
		
		printf("%c",cnt);
		if(i%10==0){
			cnt=(int)'A';
		}
		flag++;
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int x;
		cin>>x;
		if(x&1) printf("NO");
		else{
			printf("YES\n");
			solve(x);
		} 
		printf("\n");
	}
    return 0;
}
/*
3
55
1
12

*/

