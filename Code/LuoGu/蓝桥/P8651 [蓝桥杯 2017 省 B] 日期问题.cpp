#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void print(int a,int b,int c){
	if(b>12||b==0||c==0) return ;
	if(a<=59){
		int day=d[b-1],y=2000+a;
		if(b==2&&(y%4==0&&y%100!=0||y%400==0)) day++;
		if(c>day) return ;
		if(b<=9){
			if(c<=9){
				cout<<y<<"-0"<<b<<"-0"<<c<<endl;
			}else{
				cout<<y<<"-0"<<b<<"-"<<c<<endl;
			}
		}else{
			if(c<=9){
				cout<<y<<"-"<<b<<"-0"<<c<<endl;
			}else{
				cout<<y<<"-"<<b<<"-"<<c<<endl;
			}
		}
	}else{
		int day=d[b-1],y=1900+a;
		if(b==2&&(y%4==0&&y%100!=0||y%400==0)) day++;
		if(c>day) return ;
		if(b<=9){
			if(c<=9){
				cout<<y<<"-0"<<b<<"-0"<<c<<endl;
			}else{
				cout<<y<<"-0"<<b<<"-"<<c<<endl;
			}
		}else{
			if(c<=9){
				cout<<y<<"-"<<b<<"-0"<<c<<endl;
			}else{
				cout<<y<<"-"<<b<<"-"<<c<<endl;
			}
		}
	}
}
int main(){
	int a,b,c;
	scanf("%d/%d/%d",&a,&b,&c);
	if(a<60) a+=100;
	if(c<60) c+=100;
	if(a<c){
		a%=100;c%=100;
		int flag=1;
		if(a==b) flag=0;
		print(a,b,c);
		if(b<a){
			
			print(c,b,a);
			if(flag)print(c,a,b);
		}else{
			
			print(c,a,b);
			if(flag)print(c,b,a);
		}
	}else{
		a%=100;c%=100;
		int flag1=1,flag2=1;
		if(c==b) flag1=0;
		if(a==c) flag2=0;
		print(c,b,a);
		if(b<c){
			
			if(flag2)print(a,b,c);
			if(flag1)print(a,c,b);
		}else{
			
			if(flag2)print(a,c,b);
			if(flag1)print(a,b,c);
		}
	}
    return 0;
}

