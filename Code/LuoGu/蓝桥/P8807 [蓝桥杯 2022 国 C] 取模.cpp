#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int t; 
void slove(){
		int n,m;
		cin>>n>>m;
		if(n<=m-2){
			printf("Yes\n");
			return ;
		}
		int i;
		for(i=1;i<=m;i++){
			if(n%i!=i-1){
				printf("Yes\n");
				return ;
			}
		}
		printf("No\n");
}
int main(){
	cin>>t;
	for(int k=1;k<=t;k++){
		slove();
	}
    return 0;
}

