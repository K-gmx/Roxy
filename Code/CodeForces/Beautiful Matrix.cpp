#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int f1,f2;
	int a[10][10]={0};
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			int x;
			cin>>x;
			a[i][j]=x;
			if(x==1) {
				f1=i;	f2=j;
			}
		}
	}
	cout<<abs(f1-3)+abs(f2-3);
    return 0;
}

