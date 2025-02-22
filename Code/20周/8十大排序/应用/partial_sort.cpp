#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[11]={0};
	for(int i=0;i<=10;i++){
		scanf("%d",&a[i]);
	}
	partial_sort(a,a+5,a+11,greater<int>());
	sort(a+5,a+11);
	for(int i=0;i<=10;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
// 5 9 6 7 2 1 8 4 3 10 11
