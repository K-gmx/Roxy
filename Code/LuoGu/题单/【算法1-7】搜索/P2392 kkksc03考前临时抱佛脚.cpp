#include<bits/stdc++.h>
#define ll long long
#define N 40
using namespace std;
const int INF=0x3f3f3f3f;
int Left,Right;
int minn;
int a[5][N];
int s[5];
void search(int x,int y){
	if(y>s[x]){
		minn=min(minn,max(Left,Right));
		return ;
	}
	Left+=a[x][y];
	search(x,y+1);
	Left-=a[x][y];
	Right+=a[x][y];
	search(x,y+1);
	Right-=a[x][y];
}
int main(){
	for(int i=1;i<=4;i++){
		cin>>s[i];
	}
	int sum=0;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=s[i];j++){
			cin>>a[i][j];
		}
		Left=0;
		Right=0;
		minn=INF;
		search(i,1);
		sum+=minn;
	}
	cout<<sum;
    return 0;
}

