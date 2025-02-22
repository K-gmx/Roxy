#include<bits/stdc++.h>
#define ll long long
#define N 25
using namespace std;
const int INF=0x3f3f3f3f;
string a[N];
bool cmp(string a,string b){
	return (a+b>b+a);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
    	cout<<a[i];
	}
    return 0;
}

