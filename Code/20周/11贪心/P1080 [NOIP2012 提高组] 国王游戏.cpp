#include<bits/stdc++.h>
#define ll long long
#define N 10000
#define M 100
using namespace std;
struct node{
	int a,b;
	unsigned __int128 sum;
	unsigned __int128 ans;
}c[1100];
int cmp(node a,node b){
	return a.a*a.b<b.a*b.b;
}
int main(){
	int n;
	scanf("%d%d%d",&n,&c[0].a,&c[0].b);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&c[i].a,&c[i].b);
	}
	sort(c+1,c+1+n,cmp);
	unsigned __int128 sum=c[0].a;
	for(int i=1;i<=n;i++){
		c[i].ans=sum/c[i].b;
		sum*=c[i].a;
		c[i].sum=sum;
	}
	ll max=c[1].ans;
	for(int i=1;i<=n;i++){
		if(max<c[i].ans)max=c[i].ans;
	}
	printf("%lld\n",max);
	//for(int i=1;i<=n;i++)printf("%lld ",c[i].ans);
    return 0;
}

