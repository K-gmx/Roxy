#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> //failed , %80 AC , %20 TEL
int main(){
	int n,i,a[100005];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
		int j=i-1,key=a[i];
		while(j>=0&&key<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key; 
	}
	for(i=0;i<=n-1;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
