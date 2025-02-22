#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> //failed , %20 AC , %80 TEL
int main(){
	int n,i,a[100005];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			if(a[j-1]>a[j]){
				int t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	} 
	for(i=0;i<=n-1;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
