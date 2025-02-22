#include<bits/stdc++.h>
#define ll long long
#define N 20
using namespace std;
const int INF=0x3f3f3f3f;
string tr[30];//存储字符串 
int yc[30][30];//两个字母的最小重叠部分 
int vis[30];//判断单词使用频率. 
int n;
char ch;
int mt(int x,int y){
	bool p=true;
	int ky=0;
	for(int k=tr[x].size()-1;k>=0;k--){
		for(int kx=k;kx<tr[x].size();kx++){
			if(tr[x][kx]!=tr[y][ky++]){
				p=false;
				break;
			}
		}
		if(p==true){
			return tr[x].size()-k;
		}
		p=true;
		ky=0;
	}
	return 0;
}
int ans=-1;
int an=0;
void dfs(int i){
	ans=max(ans,an);//cout<<1;
	for(int j=1;j<=n;j++){//cout<<vis[j];
		if(vis[j]>=2) continue;
		if(yc[i][j]==0) continue;
		if(yc[i][j]==tr[i].size()||yc[i][j]==tr[j].size()) continue;
		vis[j]++;//cout<<1;
		an+=tr[j].size()-yc[i][j];
		dfs(j);
		an-=tr[j].size()-yc[i][j];
		vis[j]--;
		
	}
	return ;
}
int main(){
		cin>>n;
	for(int i=1;i<=n;i++) 	cin>>tr[i];
	cin>>ch;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			yc[i][j]=mt(i,j);
		}
	}/*
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<yc[i][j]<<" ";
			}
			cout<<endl;
		}*/
	for(int i=1;i<=n;i++){
		if(tr[i][0]==ch){//cout<<2;
			vis[i]++;
			an=tr[i].size();
			dfs(i);
			vis[i]--;
		}
	}
	cout<<ans;
	return 0;
}
