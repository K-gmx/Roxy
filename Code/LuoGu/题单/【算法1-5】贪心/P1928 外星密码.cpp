#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
int st=0;
string read(){
	string s="",str="";
	char ch;
	while(cin>>ch){
		if(ch=='['){
			int n;
			cin>>n;
			str=read();
			while(n--){
				s+=str;
			}
		}else if(ch==']'){
			return s;
		}else{
			s+=ch;
		}
	}
	return s;
}
int main(){
	
	cout<<read();
	return 0;
}
