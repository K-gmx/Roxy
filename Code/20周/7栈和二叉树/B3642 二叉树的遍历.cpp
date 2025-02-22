#include <bits/stdc++.h>
#define N 1000001
using namespace std;
struct node{
	int v;
	int ls,rs;
}t[N];
void preorder(int p){
	if(p!=0){
		cout<<t[p].v<<" ";
		preorder(t[p].ls);
		preorder(t[p].rs);
	}
}
void midorder(int p){
	if(p!=0){
		midorder(t[p].ls);
		cout<<t[p].v<<" ";
		midorder(t[p].rs);
	}
}
void postorder(int p){
	if(p!=0){
		postorder(t[p].ls);
		postorder(t[p].rs);
		cout<<t[p].v<<" ";
	}
}
int main(){

	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		t[i].v=i;
		t[i].ls=a;
		t[i].rs=b;
	}
	preorder(1); cout<<endl;
	midorder(1); cout<<endl;
	postorder(1);cout<<endl;
	return 0;  

}


