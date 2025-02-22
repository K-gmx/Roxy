#include<bits/stdc++.h>
#define ll long long
#define M 5000000
#define N 3000
using namespace std;
char a1[N],b1[N];
int a[N],b[N],c[N];
int main(){
	int f,max=0;
	scanf("%s%s",a1,b1);
	int la=strlen(a1),lb=strlen(b1);
	for(int i=0;i<la;i++) a[la-i-1]=a1[i]-'0';
	for(int i=0;i<lb;i++) b[lb-i-1]=b1[i]-'0';
	for(int i=0;i<la;i++){
		f=i;
		for(int j=0;j<lb;j++){
			c[f++]+=a[i]*b[j];
		}
		max=f;
	}
	for(int i=0;i<max;i++){
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	if(c[max]!=0)max++;
	while(c[max-1]==0&&max>=0)max--;
	if(max<0)max=1;
	for(int i=max-1;i>=0;i--)printf("%d",c[i]);
	/*for(int i=0;i<la;i++) printf("%d ",a[i]);
	printf("\n");
	for(int i=0;i<lb;i++) printf("%d ",b[i]);*/
	
    return 0;
}

