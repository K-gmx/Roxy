#include<bits/stdc++.h>
#define int long long
#define N 100+10
using namespace std;
const int INF=0x3f3f3f3f;
int r[N],c[N],a[N][N];
int ans[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	int t;
    	cin>>t;
    	while(t!=0){
    		c[i]++;
    		a[i][c[i]]=t;
    		r[t]++;
    		cin>>t;
		}
	}
	int top=0;
	for(int i=1;i<=n;i++){
		if(r[i]==0){
			ans[++top]=i;
		}
	}
	int num=0;
	while(num!=n){
		int temp=ans[top--];num++;
		cout<<temp<<" ";
		for(int i=1;i<=c[temp];i++){
			r[a[temp][i]]--;
			if(r[a[temp][i]]==0){
				ans[++top]=a[temp][i];
			}
		}
	}
    
    return 0;
}

