#include<bits/stdc++.h>
#define ll long long
#define N 10000000
using namespace std;
int a[N],b[N];
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)scanf("%d",&b[i]);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	sort(b+1,b+1+m);
	if(a[n]<=b[m]){
		printf("0");
		return 0;
	}
	int t=1;ll sum=0;
	for(int i=1;i<=n;i++){
		while(b[t]<=0&&t<=m){
			t++;
		}
		if(a[i]>b[t]&&t<=m){
			t++;
			a[i]=0;
		}
	}
	if(t<m){
		printf("0");
		return 0;
	}
	for(int i=1;i<=n;i++)sum+=a[i];
	printf("%d",sum);
    return 0;
	}
/*for(int i=1;i<=n;i++)printf("%d ",a[i]);
	for(int i=1;i<=m;i++)printf("%d ",b[i]);*/
