#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
    int n;   cin>>n;
    for(int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    int d=0;
    for(int i=1;i<n;i++)   d = __gcd(d,a[i]-a[i-1]);     
    if(d==0) cout<<n<<endl;
    else     printf("%d\n",(a[n - 1] - a[0]) / d + 1);
    return 0;
}

