#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(a<b&&b<c){
			cout<<"STAIR"<<endl;
		}else if(b>a&&b>c){
			cout<<"PEAK"<<endl;
		}else{
			cout<<"NONE"<<endl;
		}
	} 
    return 0;
}

