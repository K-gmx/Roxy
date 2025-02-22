#include<bits/stdc++.h>
#define ll long long
#define pi 3.14
using namespace std;
const int INF=0x3f3f3f3f;
int ans=INF;
int sk[20],vk[20],n,m;
void dfs(int k,int r,int h,int s,int v) {
	int maxl;
	if(k==0){
		if(v==n) ans=min(ans,s);
		return ;
	}else{
		if(v+vk[k-1]>n) return ;
		if(s+sk[k-1]>ans) return;
		if(2*(n-v)/r+s >= ans)  return;   
		for(int i=r-1;i>=k;i--){  //  °ë¾¶
			if(k==m) s=i*i;
			maxl=min(h-1,(n-v-vk[k-1])/i/i);
			for(int j=maxl;j>=k;j--){  //   ¸ß
				dfs(k-1,i,j,s+2*i*j,v+i*i*j);
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		sk[i]=sk[i-1]+2*i*i;
		vk[i]=vk[i-1]+i*i*i;
	}
	if(n<=0||m<=0) dfs(m,n,n,0,0);
	else dfs(m,28,28,0,0);
	if(ans==INF)cout<<0<<endl;
	else cout<<ans<<endl;;
    return 0;
}

