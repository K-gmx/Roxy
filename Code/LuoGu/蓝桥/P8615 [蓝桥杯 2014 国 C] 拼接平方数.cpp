#include<bits/stdc++.h>
#define ll long long
#define N 1000010
using namespace std;
const int INF=0x3f3f3f3f;
bool f[N];
int main(){
	for(int i=1;i<=1000;i++) f[i*i]=true;
	int l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		if(f[i]){
			for(int j=10;j<=i;j*=10){
				if(f[i%j]&&f[i/j]) {
					cout<<i<<endl;
					break;
				}
			}
		}
	}
    return 0;
}

