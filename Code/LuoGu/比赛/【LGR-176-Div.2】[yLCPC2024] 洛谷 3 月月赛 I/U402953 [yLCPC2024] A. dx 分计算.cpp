#include<bits/stdc++.h>
#define ll long long
#define N 10000010
using namespace std;
const int INF=0x3f3f3f3f;
char ch[N]={0}; 
int a[N];
int t,q,l,r;
int main(){
	cin>>t;
	for(int k=1;k<=t;k++){
		scanf("%s",ch);
		cin>>q;
		int i=0;
		while(ch[i]!='\0'){
			if(ch[i]=='P'){
				a[i+1]=a[i]+3;//cout<<"111111111"<<endl;
			}
			if(ch[i]=='p'){
				a[i+1]=a[i]+2;//cout<<"2222222222222222"<<endl;
			}
			if(ch[i]=='G'){
				a[i+1]=a[i]+1;//cout<<"333333333"<<endl;
			}
			if(ch[i]=='g'){
				a[i+1]=a[i];
			}
			if(ch[i]=='m'){
				a[i+1]=a[i];
			}
			i++;
		}/*
		printf("111111111111111  %d    ",ch[0]=='P');
		for(int j=0;j<i;j++){
			printf("%d ",a[j]);
		}*/
		for(int j=1;j<=q;j++){
			cin>>l>>r;
			cout<<a[r]-a[l-1]<<endl;
		}
	}
    return 0;
}

