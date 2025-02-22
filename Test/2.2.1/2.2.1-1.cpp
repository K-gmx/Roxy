#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
ll MAX=10;
struct line{
	int* f;
	int max;
	int len;
}l;
void init(line &l){
	l.f=(int*)malloc(MAX*(sizeof (int)));
	l.max=MAX;
	l.len=0;
}
void increase(line &l,int x){
	int *p=l.f;
	l.f=(int*)malloc((l.max+x)*(sizeof (int)));
	for(int i=0;i<l.len;i++){
		l.f[i]=p[i];
	}
	l.max=10+x;
}
bool insert(line &l,int i,int x){
	i--;
	if(i>=l.max||i<1||i>l.len) return false;
	for(int j=l.len;j>i;j--){
		l.f[j]=l.f[j-1];
	}
	l.f[i]=x;
	l.len++;
	return true;
}
bool del(line &l,int i,int &x){
	i--;
	if(i<1||i>=l.len) return false;
	x=l.f[i];
	for(;i<=l.len-1;i++){
		l.f[i]=l.f[i+1];
	} 
	l.len--;
	return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    init(l);
    for(int i=l.len;i<=8;i++){
    	l.f[l.len++]=i;
    	cout<<l.f[i]<<" ";
	}
	cout<<endl;
	cout<<l.len<<" "<<l.max<<endl;
	insert(l,5,555);
	for(int i=0;i<l.len;i++){
		cout<<l.f[i]<<" ";
	}
	cout<<endl;
	int e=-1;
	del(l,5,e);
	cout<<e<<endl;
	for(int i=0;i<l.len;i++){
		cout<<l.f[i]<<" ";
	}
	cout<<endl;
    return 0;
}

