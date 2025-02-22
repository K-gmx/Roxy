#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
#define L long long
using namespace std;
int yz(int x);
int main(){
	
	int a[7][7],flag=1;
	int max=0;
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=6;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=6;j++)
		{
			if(flag==1)
			{
				max=yz(a[i][j]);
				printf("%5d %6d\n",max,a[i][j]);
				flag=0;
			}
			if(max<yz(a[i][j]))
			{
				max=yz(a[i][j]);
				printf("%5d %6d\n",max,a[i][j]);
			}
		}
	}
	
	return 0;
}

int yz(int x){
	
	long long sum=0;
	for(int i=1;i<=x-1;i++)
	{
		if(x%i==0)
		{
			sum+=i;
		}
	}
	return sum;
}
/*
393353 901440 123481 850930 423154 240461
373746 232926 396677 486579 744860 468782
941389 777714 992588 343292 385198 876426
483857 241899 544851 647930 772403 109929
882745 372491 877710 340000 659788 658675
296521 491295 609764 718967 842000 670302
*/

