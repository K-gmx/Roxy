#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int cnt=0; 
int n,k;
int a[N][3];
bool check(int x){
	cnt=0;
	for(int i=1;i<=n;i++){
		cnt+=(a[i][1]/x)*(a[i][2]/x);
	}
	if(cnt>=k) return true;
	return false;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i][1]>>a[i][2];
	}
	int l=1,r=INF,mid;
	while(l!=r){
		mid=(l+r+1)/2;
		if(check(mid)){
			l=mid;
		}else{
			r=mid-1;
		}
	}
	cout<<r;
    return 0;
}

