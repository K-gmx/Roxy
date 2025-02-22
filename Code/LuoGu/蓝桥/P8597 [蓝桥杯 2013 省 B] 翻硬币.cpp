#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	string s1,s2;
	int cnt=0;
	cin>>s1>>s2;
	int flag=1;
	while(flag){
		flag=0;
		for(int i=0;i<s1.size();i++){
			if(s1[i]!=s2[i]){
				
				if(s1[i]=='*') s1[i]='o';
				else s1[i]='*';
				if(s1[i+1]=='o') s1[i+1]='*';
				else s1[i+1]='o';
				cnt++;
				flag=1;
				//cout<<i<<endl;
			}
		} 
	}
	//cout<<s1<<endl;
	//cout<<s2<<endl;
	cout<<cnt;
    return 0;
}
/*
*o**o***o***
*o***o**o***
*/
