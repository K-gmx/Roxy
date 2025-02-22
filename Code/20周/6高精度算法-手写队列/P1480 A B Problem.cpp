#include<bits/stdc++.h>
#define ll long long
#define N 10001
using namespace std;
char a1[N];
ll b,a[N],d=0,c[N];
int main(){
	scanf("%s%d",a1,&b);
	int la=strlen(a1);
	for(int i=0;i<la;i++)a[la-i-1]=a1[i]-'0';
	int lenc=la-1;
	for(int i=lenc;i>=0;i--){
		c[i]=(d*10+a[i])/b;
		d=(d*10+a[i])%b;
		//printf("%lld ",a[i]);
	}
	while(c[lenc]==0 && lenc>=0) lenc--;
	if(lenc<0)lenc=0;
	for(int i=lenc;i>=0;i--) printf("%lld",c[i]);
    return 0;
}

