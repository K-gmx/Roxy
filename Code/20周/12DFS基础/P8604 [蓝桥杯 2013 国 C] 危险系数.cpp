#include<bits/stdc++.h>
#define ll long long
#define N 2100
using namespace std;
int arr[N][3],a[N];
int vis[N],cnt[N],num[N];
int ans=0,sum=0;
int x,y;
int n,m;
void dfs(int temp,int k){
	if(temp==y)  {
		//cout<<cnt<<"cccccccccccccccc"<<endl;
		for(int i=1;i<=n;i++){
			if(a[i])cnt[i]++;
			//cout<<a[i]<<" "<<endl;
		}
		sum++;
		return ;
	}
	for(int i=1;i<=m;i++){
		//cout<<i<<" "<<temp<<" "<<cnt<<endl;
		if(vis[i]!=1&&(arr[i][1]==temp||arr[i][2]==temp)&&(num[arr[i][2]]!=1||num[arr[i][1]]!=1)){
			vis[i]=1;
			int t=temp;
			if(arr[i][1]==temp)t=arr[i][2];
			else t=arr[i][1];
			a[t]=1;
			num[t]=1;
			//cout<<k<<" "<<t<<" "<<endl;
			//cout<<cnt<<" "<<temp<<"->"<<t<<endl;
			//cout<<" "<<i<<" "<<t<<endl;
			dfs(t,k+1);
			num[t]=0;
			a[t]=0;
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>arr[i][1]>>arr[i][2];
	}
	cin>>x>>y;
	dfs(x,1);
	if(sum==0) {
		cout<<"-1"<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(sum==cnt[i]&&i!=y&&i!=x)ans++;
		//cout<<" "<<cnt[i];
	}
	cout<<ans;
	return 0;
}

