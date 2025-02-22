#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
ld n;
struct node
{
	long double k, b;
}a[N];
int main(){
	cin>>n;
	set< pair<ld,ld> > o; 
	for(int i=1;i<=n;i++){
		ld a1,a2;
		cin>>a1>>a2;
		o.insert({a1,a2});
	}
	int m=0;
	for(auto i=o.begin();i!=o.end();i++){
		a[++m] = {(*i).first, (*i).second};
	}
	int cnt=0;
	for(int i=1;i<=m;i++){
		ld k1=a[i].k;
		ld b1=a[i].b;
		set< pair<ld,ld> > p; 
		for(int j=1;j<=i-1;j++){
			ld k2=a[j].k;
			ld b2=a[j].b;
			if(k1==k2) continue;
			ld x1=(b1-b2)/(k1-k2);
			ld x2= k1*x1+b1;
			p.insert({x1,x2});
			//cout<<i<<" "<<j<<endl;
		}
		cnt+=(p.size()+1);
	}
	
	cout<<cnt+1;
    return 0;
}

