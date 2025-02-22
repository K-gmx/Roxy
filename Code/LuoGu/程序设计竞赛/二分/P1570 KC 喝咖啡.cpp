#include<bits/stdc++.h>
#define ll long long
#define N 300
using namespace std;
const int INF=0x3f3f3f3f;
int n,m; 
struct node{
	double c;
	double v;
	double vxc;
}a[N]; 
bool cmp(node x,node y){
	return x.vxc<y.vxc;
}
int check(double k){
	for(int i=1;i<=n;i++) a[i].vxc=k*a[i].c-a[i].v;
	sort(a+1,a+1+n,cmp);
	double tot=0;
	for(int i=1; i<=m; i++)//选择前m个累加起来 
		tot+=a[i].vxc;
	return tot<=0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++)cin>>a[i].v;
	for(int i=1; i<=n; i++) {
		cin>>a[i].c;
		//if(a[i].v/a[i].c>r) r=a[i].v/a[i].c;
	}
	double l=0,r=10000,mid;
	while(r-l>=1e-4){
		mid=(l+r)/2;
		if(check(mid)){
			l=mid;
		}else{
			r=mid;
		}
	}
	printf("%.3f",r);
    return 0;
}

