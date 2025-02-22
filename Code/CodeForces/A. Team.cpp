#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2)sum++;
    }
    cout<<sum;
    return 0;
}
