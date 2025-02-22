#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
void p1(int k){
	for(int i=1;i<=k;i++){
		if(i&1) cout<<"##";
		else cout<<"..";
	}
	cout<<endl;
}
void p2(int k){
	for(int i=1;i<=k;i++){
		if(i&1) cout<<"..";
		else cout<<"##";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		for(int j=1;j<=x;j++){
			if(j&1){
				p1(x);
				p1(x);
			}else{
				p2(x);
				p2(x);
			}
		}
		
	} 
    return 0;
}

