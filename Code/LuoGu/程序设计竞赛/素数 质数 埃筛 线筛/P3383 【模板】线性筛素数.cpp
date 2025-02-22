#include<bits/stdc++.h>
#define ll long long
#define N  100000000+10
#define M  10000000+10
using namespace std;
int m,p[6000010];
bool v[N];
int n,t;
const int INF=0x3f3f3f3f;
void pr(){
	memset(v,true,sizeof v);
	//v[1]=false;
	for(int i=2;i<=N-1;i++){
		if(v[i]){
			p[++m]=i;
		}
		for(int j=1;j<=m;j++){
			if(p[j]>(N-1)/i) break;
			v[p[j]*i]=false;
			if(i%p[j]==0) break;
		}
	}
	//for(int i=1;i<=50;i++) cout<<p[i]<<endl;
	return ;
} 
int main(){
	
	cin>>n>>t; 
	pr();
	//vv[1]=false;
	for(int i=1;i<=t;i++){
		int x;	scanf("%d",&x);
		printf("%d\n",p[x]);
	}
    return 0;
}
