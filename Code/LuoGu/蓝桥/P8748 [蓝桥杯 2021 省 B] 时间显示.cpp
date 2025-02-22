#include<bits/stdc++.h>
#define ll long long
#define N 10000000
#define M 31536000000 
#define day 86400
using namespace std;
const int INF=0x3f3f3f3f;
ll y[N];
void jisuan(ll x){
	while(x>=day){
		x-=day;
	}
	ll h=0,m=0,s=0;
	while(x>=3600){
		x-=3600;
		h++;
	}
	while(x>=60){
		x-=60;
		m++;
	}
	s=x;
	printf("%02lld:%02lld:%02lld\n", h, m, s);
}
int main(){/*
	for(ll i=1;i<=N;i++){
		ll year=i+1970-1;
		if(year%4==0&&year%100!=0||year%400==0){
			y[i]+=86400000;
		}
		y[i]+=y[i-1];
		y[i]+=M;
	}
	
	ll l=0,r=N;
	while(l!=r){
		ll mid=(l+r+1)/2;
		if(x-y[mid]>=0){
			l=mid;
		}else if(x-y[mid]<0){
			r=mid-1;
		}
	} */
	ll x;
	cin>>x;
	jisuan(x/1000);
	//cout<<l<<" "<<r;
    return 0;
}

