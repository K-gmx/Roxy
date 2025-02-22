#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int s[N];
int findn(int x){
	if(x!=s[x]) s[x]=findn(s[x]);
	return s[x];
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=N;i++) s[i]=i;
	int a[N];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int temp=findn(a[i]);
		a[i]=temp;
		s[temp]=findn(temp+1);
		
	} 
	for(int i=1;i<=n;i++)  printf("%d ",a[i]);
    return 0;
}

