#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int m,n,a[N]; 
ll sum=0;
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+m);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		if(x<=a[1]){
			sum+=a[1]-x;
		}else if(x>=a[m]){
			sum+=x-a[m];
		}else{
			int index=lower_bound(a+1,a+1+m,x)-a;
			sum+=min(a[index]-x,x-a[index-1]);
		}
		//cout<<lower_bound(a+1,a+1+m,x)-a<<"   ";
	}
	printf("%lld",sum);
    return 0;
}
/*
4 12
513 567 598 689
500 513 515 566 567 568 597 598 599 688 689 690 
*/
