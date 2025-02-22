#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
#define L long long
using namespace std;
int turn(int a,int r);
int count1=0;
int main(){
	
	long long i;
	for(i=1;i<=1e8;i++)
	{
		if(turn(i,8)==turn(i,2))
		{
			count1++;
			printf("%d %d\n",count1,i);
		}
		if(count1>23)break;
	}
	return 0;
}

int turn(int a,int r){
	
	int sum=0;
	while(a>=r)
	{
		sum+=a-a/r*r;
		a=a/r;
	}
	sum+=a;
	return sum;
}

