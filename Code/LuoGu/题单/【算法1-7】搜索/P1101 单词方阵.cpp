#include<bits/stdc++.h>
#define ll long long
#define N 100+10
using namespace std;
const int INF=0x3f3f3f3f;
ll n;
char ch[N][N];
char a[N][N];
char word[10]={'y','i','z','h','o','n','g'};
int dx[8]={1,-1,0,0,1,1,-1,-1};
int dy[8]={0,0,-1,1,1,-1,1,-1};
int dfs(int x,int y,char c,int t){
	//cout<<x<<" "<<y<<endl;
	int flag;
	for(int i=0;i<=6;i++) if(word[i]==c) flag=i+1;
	if(flag==7) {
		a[x][y]=c;
		return 1;
	}
	int i,max;
	if(t==8) {
		max=7;
		i=0;
	}else{
		i=t;
		max=t;
	}
	for(;i<=max;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<1||ny<1||nx>n||ny>n) continue;
		if(ch[nx][ny]==word[flag]&&(i==t||t==8)) {
			if(dfs(nx,ny,word[flag],i)){
				a[x][y]=c;
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>ch[i][j];
		}
	}
	memset(a,'*',sizeof(a));
	//dfs(1,1,'*');
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(ch[i][j]=='y') dfs(i,j,'y',8);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
    return 0;
}

