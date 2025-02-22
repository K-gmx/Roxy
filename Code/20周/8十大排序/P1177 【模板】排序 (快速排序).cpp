#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // %100 AC
/*int cmp(const void*e1,const void*e2){
	int flag=0;
	if(*((long long*)e1)>*((long long*)e2)){
		flag=1;
	}
	else if(*((long long*)e1)<*((long long*)e2)){
		flag=-1;
	}
	return flag;
}*/

int main(){
	long long n,i,a[100005];
	scanf("%lld",&n);
	for(i=0;i<=n-1;i++){
		scanf("%lld",&a[i]);
	}
	qsort(a,n,sizeof(long long));
	for(i=0;i<=n-1;i++){
		printf("%lld ",a[i]);
	}
	return 0;
} 
