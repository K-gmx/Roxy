#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int x;
	cin>>x;
	if(x==1||x==2||x==3) printf("NO");
	else if(x&1){
		printf("NO");
	}else{
		printf("YES");
	}
    return 0;
}

