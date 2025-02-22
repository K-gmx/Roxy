#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> //failed , %80 AC , %20 TEL
void insertion_sort(int *a,int n,int gap);
void shell_sort(int *a,int n);
int main(){
	int n,i,a[100005];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	shell_sort(a,n);
	for(i=0;i<=n-1;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
void insertion_sort(int *a,int n,int gap){
	for(int i=0;i+gap<=n;i++){
		for()
	}
}
void shell_sort(int *a,int n){
	for(int i=n/2;i>=0;i/=2){
		insertion_sort(a,n,i);
	}
}
