#include<bits/stdc++.h>
#define ll long long
#define N  1000000+10
using namespace std;
ll m,p[1000000];
bool v[N],vv[N];
const int INF=0x3f3f3f3f;
void pr(){
	memset(v,true,sizeof v);
	v[1]=false;
	for(int i=2;i<=50000;i++){
		if(v[i]){
			p[++m]=i;
		}
		for(int j=1;j<=m;j++){
			if(p[j]>50000/i) break;
			v[p[j]*i]=false;
			if(i%p[j]==0) break;
		}
	}
	//for(int i=1;i<=50;i++) cout<<p[i]<<endl;
	return ;
} 
int main(){
	pr();
	ll l,r,cnt=0;	cin>>l>>r;
	//vv[1]=false;
	if(l<2) l=2;
	for(ll i=1;i<=m;i++){
		for(ll j=l/p[i];1ll*j*1ll*p[i]<=r;j++){
			if(j*p[i]<l) continue;
			if(j!=1) vv[j*p[i]-l]=true;
		}
	}
	for(int i=l-l;i<=r-l;i++){
		if(!vv[i]) cnt++;
	}
	cout<<cnt<<endl;
	//for(int i=0;i<=50;i++) cout<<i<<" "<<vv[i]<<endl;
    return 0;
}

