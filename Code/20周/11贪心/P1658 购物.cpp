#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int a[200],x,n;
	scanf("%d%d",&x,&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	if(a[0]!=1){ cout<<-1; return 0;}
	int ans=0,s=0;
	while(s<x){
		for(int i=n-1;i>=0;i--){
			if(a[i]<=s+1){
				ans++;
				s+=a[i];
				break;
			}
		}
	}
	printf("%d",ans);
	return 0;
}
