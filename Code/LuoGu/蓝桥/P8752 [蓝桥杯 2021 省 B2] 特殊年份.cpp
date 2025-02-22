#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int x,cnt=0;
	while(cin>>x){
		int a,b,c,d;
		a=x/1000;
		b=x/100%10;
		c=x/10%10;
		d=x%10;
		if(a==c&&d-b==1) cnt++;
	}
	cout<<cnt;
    return 0;
}

