#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF=0x3f3f3f3f;
struct node{
	int data;
	node *next;
};
int main(){
	int n,m;
	cin>>n>>m;
	node *now,*pre,*p,*head;
	head=new node; head->data=1; head->next=NULL; now=head;
	for(int i=2;i<=n;i++){
		p=new node;
		p->data=i;
		p->next=NULL;
		now->next=p;
		now=p;
	}
	now->next=head;
	pre=head;now=head;
	while((n--)!=1){
		for(int i=1;i<m;i++){
			pre=now;
			now=now->next;
		}
		cout<<now->data<<" ";
		pre->next=now->next;
		delete now;
		now=pre->next;
	}
	cout<<now->data<<" ";
	delete now;
	return 0;
}
