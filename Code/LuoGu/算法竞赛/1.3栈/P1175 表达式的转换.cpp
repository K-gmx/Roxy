#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
stack<char> dat,op;
stack<int> num,dat2;
string s;
void s1(){
	while(!dat.empty()){
		op.push(dat.top());
		dat.pop();
	}
}
void s2(){
	while(!op.empty()){
		dat.push(op.top());
		op.pop();
	}
}
void s3(){
	while(!op.empty()){
		dat.push(op.top());
		cout<<op.top()<<" ";
		op.pop();
	}
	cout<<endl;
}
int check(char c){
	switch(c){
		case'+': return 1;
		case'-': return 1;
		case'*': return 2;
		case'/': return 2;
		case'^': return 3;
		case'(': return 0;
		case')': return 0;
		default: return -1;
	}
}
int js(int x,int y,char c){
	switch(c){
		case'+': return x+y;
		case'-': return x-y;
		case'*': return x*y;
		case'/': return x/y;
		case'^': return pow(x,y);
		default: return -INF;
	}
}
void p1(){
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])) dat.push(s[i]);
		else if(s[i]=='(') op.push(s[i]);
		else if(s[i]==')'){
			while(op.top()!='('){
				dat.push(op.top());
				op.pop();
			}
			op.pop();
		}else if(check(s[i])>=1&&check(s[i])<=3){
			//if(!op.empty()){
				//char c=op.top();
				//while(!op.empty()&&check(s[i])<=check(c)){
					
				//}
			//}
			while(!op.empty()&&check(s[i])<=check(op.top())){
				if(check(s[i])==check(op.top())&&op.top()=='^'){
					break;
				}
				dat.push(op.top());
				op.pop();
			}
			op.push(s[i]);
		}
	}
	s2();
	s1();
	s3();
}
void p2(){
	s1();
	while(!op.empty()){
		if(isdigit(op.top())){
			num.push(op.top()-'0');
			op.pop();
		}else{
			int a=num.top();
			num.pop();
			int b=num.top();
			num.pop();
			int c=js(b,a,op.top());
			op.pop();
			num.push(c);
			while(!num.empty()){
				dat2.push(num.top());
				num.pop();
			}
			while(!dat2.empty()){
				num.push(dat2.top());
				cout<<dat2.top()<<" ";
				dat2.pop();
			}
			s3();
			s1();
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>s;
	p1();
	p2();
	
	return 0;
}
