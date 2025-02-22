#include<bits/stdc++.h>
#define ll long long
#define N 200
using namespace std;
const int INF=0x3f3f3f3f;
int n,k;
int a[N]; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int cnt=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(k==0){
			if(a[i-1]==a[i]){
				k=0;
				cnt++;
			}else{
				break;
			}
		}else{
			if(a[i]>0){
				cnt++;
				k--;
			}
		}
		
	}
	cout<<cnt;
    return 0;
}

