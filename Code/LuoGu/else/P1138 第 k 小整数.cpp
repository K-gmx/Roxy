#include<bits/stdc++.h>
#define ll long long
#define N 30000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,k;
int a[N]; 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	int flag=0;
	for(int i=1;i<=30000;i++){
		if(a[i]!=0){
			if(k>1)k--;
			else{
				flag=1;
				cout<<i;
				break;
			}
		}
	}
	if(flag=0) cout<<"NO RESULT";
    return 0;
}

