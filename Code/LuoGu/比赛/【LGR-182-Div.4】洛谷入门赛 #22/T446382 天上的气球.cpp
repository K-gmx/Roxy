#include<bits/stdc++.h>
#define ll long long
#define N 1000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,a[N][N],k,b[N][N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++){
			int x,y,h,c;
			cin>>x>>y>>h>>c;
			if(a[x][y]!=0){
				if(h<b[x][y]){
					a[x][y]=c;
					b[x][y]=h;
				}
			}else{
				a[x][y]=c;
				b[x][y]=h;
			}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

