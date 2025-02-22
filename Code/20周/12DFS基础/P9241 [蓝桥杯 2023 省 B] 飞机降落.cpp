#include<bits/stdc++.h>
#define ll long long
#define N 20
using namespace std;
int n,flag=0;
int a[20][5];
int vis[N]={0};
void dfs(int k,int tim){
	//cout<<k<<" ";
	if(k==n+1){
		flag=1;
		return ;
	}
	for(int i=1;i<=n;i++){//cout<<k<<" "<<i<<" "<<tim<<endl;
	//
		int temp=tim;
		if(tim>a[i][1]+a[i][2]||vis[i])continue;
		if(tim<a[i][1]){
			tim=a[i][1]+a[i][3];
		}else{
			tim+=a[i][3];
		}//if(i==3)cout<<"3333333333333";
		vis[i]=1;
		//for(int j=1;j<=n;j++)cout<<" "<<vis[j]<<endl;
		dfs(k+1,tim);
		vis[i]=0;
		tim=temp;
		
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		for(int j=1;j<=n;j++){
			for(int k=1;k<=3;k++){
				cin>>a[j][k];
			}
		}
		//cout<<n<<endl;
		
		dfs(1,0);
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		flag=0;
		for(int j=1;j<=n;j++)vis[i]=0;
	} 
    return 0;
}
/*2
30 2 20
0 100 10
10 10 10

3
0 10 20
10 10 20
20 10 20*/
