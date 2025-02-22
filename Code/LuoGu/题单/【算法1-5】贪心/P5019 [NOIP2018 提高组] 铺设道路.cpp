#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
#define MOD (1000000000+7)
using namespace std;
const int INF=0x3f3f3f3f;
int n;
int a[N];
ll cnt=0;
int main(){
    cin>>n;
    int last=0,s=0;
    cin>>last;s=last;cnt+=last;
    for(int i=2;i<=n;i++){
        //cin>>a[i];
        int t; cin>>t;
        if(t<=last) {

        }else{
            cnt+=t-last;
            s=t;
        }
        last=t;
    }
    cout<<cnt<<endl;
    return 0;
}