#include<bits/stdc++.h>
#define ll long long
#define N 10
using namespace std;
int ans=0;
int arr[N][N],out[N][N],outm[100];
int log(int a,int b,int c){
	if(c==1)return a&b;
	if(c==2)return a|b;
	return a^b;
}
int check(){
	int kk=1;
	for(int i=2;i<=5;i++){
		for(int j=1;j<=5-i+1;j++){
			arr[i][j]=log(arr[i-1][j],arr[i-1][j+1],outm[kk++]);
		}
	}
	if(arr[5][1]==1)return 1;
	return 0;
}
void dfs(int k){
	if(k==11){
		if(check()){
			ans++;
		}
		return ;
	}
	for(int i=1;i<=3;i++){
		outm[k]=i;
		dfs(k+1);
	}
} 
int main(){
	arr[1][1]=1;
	arr[1][2]=0;
	arr[1][3]=1;
	arr[1][4]=0;
	arr[1][5]=1;
	dfs(1);
	cout<<ans;
    return 0;
}

