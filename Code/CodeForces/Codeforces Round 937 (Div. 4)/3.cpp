#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		char h1,h2,m1,m2;
		getchar();
		scanf("%c%c:%c%c",&h1,&h2,&m1,&m2);
		int a=(h1-'0')*10+(h2-'0');
		//int flag=1;
		cout<<a;
		if(a>=12){
			if(a==12){
				cout<<h1<<h2<<":"<<m1<<m2<<" "<<"PM"<<endl;
				//scanf("%c%c:%c%c PM",h1,h2,m1,m2);
			}else{
				a=a-12;
				h1=(a/10)+'0';
				h2=a%10+'0';
				cout<<h1<<h2<<":"<<m1<<m2<<" "<<"PM"<<endl;
			}
		}else{
			if(a==0){
				cout<<"12:"<<m1<<m2<<" "<<"AM"<<endl;
			}else{
				cout<<h1<<h2<<":"<<m1<<m2<<" "<<"AM"<<endl;
			}
		}
	}
    return 0;
}

