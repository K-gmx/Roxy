#include<bits/stdc++.h>
#define ll long long
#define N 5000
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int a[1000+10][5000+10],b[N][N];
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) {
			int x; scanf("%d",&x);
			a[i][x]++;
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		int x;	scanf("%d",&x);
		int cnt=0;
		for(int j=1;j<=x;j++){
			int num; scanf("%d",&num);
			if(a[i][num]!=0){
				cnt++;
			}
		}
		if(cnt==m) sum+=2;
	}
	cout<<sum;
    return 0;
}

