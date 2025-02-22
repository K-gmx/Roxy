#include<bits/stdc++.h>
#define ll long long
#define N 1010
using namespace std;
int a[N],b[N];
int main(){
	int n,m,d,l,k;
	scanf("%d%d%d%d%d",&n,&m,&k,&l,&d);
	for(int i=1;i<=d;i++){
		int x,y,p,q;
		scanf("%d%d%d%d",&x,&y,&p,&q);
		if(x==p){
			if(q>y) b[y]++;
			else b[q]++;
		}else{
			if(p>x) a[x]++;
			else a[p]++;
		}
	}
	int aa[N]={0},bb[N]={0},max=-1,f=-1;
for(int j=1;j<=k;j++){
	for(int i=1;i<=n;i++){
		if(a[i]>max){
			max=a[i];
			f=i;
		}
		
	}aa[f]++;
		max=-1;
		a[f]=0;
}
for(int j=1;j<=l;j++){
	for(int i=1;i<=m;i++){
		if(b[i]>max){
			max=b[i];
			f=i;
		}
		
	}bb[f]++;
		max=-1;
		b[f]=0;
}
	for(int i=1;i<=1005;i++){
		if(aa[i]>0)printf("%d ",i);
	}
	printf("\n");
	for(int i=1;i<=1005;i++){
		if(bb[i]>0)printf("%d ",i);
	}
	
    return 0;
}
/*for(int i=1;i<=n;i++)printf("%d ",a[i]);
	printf("\n");
	for(int i=1;i<=m;i++)printf("%d ",b[i]);*/
