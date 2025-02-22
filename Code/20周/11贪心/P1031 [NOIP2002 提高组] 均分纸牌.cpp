#include<bits/stdc++.h>
#define ll long long
#define N 100000
using namespace std;
int main(){
	int n,a[N]={0},c[N]={0},cnt=0;
	ll sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	sum/=n;
	for(int i=1;i<=n;i++){
		a[i]-=sum;
		if(a[i]==0)continue;
		a[i+1]+=a[i];
		cnt++;
	}
	printf("%d",cnt);
    return 0;
}

