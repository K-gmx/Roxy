#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
typedef struct Node{
	int data;
	Node *next;
}LNode,*LinkList;

bool initList(LinkList &l){
	l=(Node*)malloc(sizeof(Node));
	if(l==NULL) return false;
	l->next=NULL;
	return true;
}
bool instertNext(LNode *p,int data){
	if(p==NULL) return false;
	LinkList s=(LinkList)malloc(sizeof(LNode));
	if(s==NULL) return false;
	s->data=data;
	s->next=p->next;
	p->next=s;
	return true;
}
bool insertPrime(LNode *p,int data){
	instertNext(p,p->data);
	p->data=data;
	return true;
}
LinkList GetElem(LinkList l,int i){
	if(i<0) return NULL;
	Node *p=l;
	int j=0;
	while(p!=NULL&&j<i){
		p=p->next;
		j++;
	}
	return p;
}
bool insert(LinkList &l,int i,int data){
	/*
	if(i<1) return false;
	LNode *p=l;
	int j=0;
	while(j<i-1||p!=NULL){
		p=p->next;
		j++;
	}
	*/
	LNode *p=GetElem(l,i-1);
	if(p==NULL) return false;
	return instertNext(p,data);
	/*
	LinkList s=(LinkList)malloc(sizeof(LNode));
	if(s==NULL) return false;
	s->data=data;
	s->next=p->next;
	p->next=s;
	return true;
	*/
}
bool DeleteNode(LinkList p){
	if(p==NULL) return false;
	LinkList q=p->next;
	p->data=q->data;
	p->next=q->next;
	free(q);
	return true;
}
bool Listdelete(LinkList &l,int i,int &data){
	/*
	if(i<1) return false;
	LNode *p=l;
	int j=0;
	while(j<i-1||p!=NULL){
		p=p->next;
		j++;
	}
	*/
	LNode *p=GetElem(l,i-1);
	if(p==NULL) return false;
	LinkList q=p->next;
	p->next=q->next;
	data=q->data;
	free(q);
	return true;
}
LinkList LocateElem(LinkList l,int data){
	LinkList p=l;
	while(p!=NULL&&p->data!=data){
		p=p->next;
	}
	return p;
}
int len(LinkList l){
	int len=0;
	LinkList p=l;
	while(p!=NULL) {
		len++;
		p=p->next;
	}
	return len;
} 
void print(LinkList head){
	Node *t=head;
	//cout<<t->data<<endl;
	while(t->next!=NULL){
		t=t->next;
		cout<<t->data<<endl;
	}
}
LinkList List_tail(LinkList &l){
	int x;
	cin>>x;
	l=(LinkList)malloc(sizeof(LNode)); 
	LNode *r,*s=l;
	while(x!=999){
		r=(LinkList)malloc(sizeof(LNode)); 
		r->data=x;
		r->next=NULL;
		s->next=r;
		s=r;
		cin>>x;
	}
	return l;
}
LinkList List_head(LinkList &l){
	int x;	cin>>x;
	l=(LinkList)malloc(sizeof(LNode)); 
	l->next=NULL;
	LNode *r,*s;
	while(x!=999){
		s=(LinkList)malloc(sizeof(LNode)); 
		s->data=x;
		s->next=l->next;
		l->next=s;
		cin>>x;
	}
	return l;
}
void test(LinkList &l){
	l->data=2;
}
/***************************************************************************************************************************/
typedef struct DNode{
	int data;
	DNode *pri,*next;
}DNode,*DLinkList;

bool initD(DLinkList l){
	l=(DLinkList)malloc(sizeof(DNode));
	if(l==NULL) return false;
	l->next=NULL;
	l->pri=NULL;
	return true;
}

bool Empty(DLinkList l){
	if(l->next==NULL) return true;
	else return false;
}
bool insertNextDNode(DLinkList p,DLinkList s){
	if(p==NULL || s==NULL ) return false;
	s->next=p->next;
	if(p->next!=NULL)p->next->pri=s;
	p->next=s;
	s->pri=p;
	return true;
}
bool DeleteNextDNode(DLinkList p){
	if(p==NULL) return false;
	if(p->next==NULL) return false;
	if(p->next->next==NULL){
		free(p->next);
		p->next=NULL;
		return true;
	}
	p->next->next->pri=p;
	p->next=p->next->next;
	return true;
}
void DestroyDLinkList(DLinkList l){
	while(l->next!=NULL){
		DeleteNextDNode(l);
	}
	free(l);
	l=NULL;
}
void printDNode(DLinkList l){
	if(l==NULL) return ;
	l=l->next;
	while(l!=NULL){
		cout<<l->data<<endl;
		l=l->next;
	}
}
DLinkList DList_tail(DLinkList &l){
	int x;
	cin>>x;
	l=(DLinkList)malloc(sizeof(DNode));  l->next=NULL; l->pri=NULL;
	DNode *r,*s=l;
	while(x!=999){
		r=(DLinkList)malloc(sizeof(DNode)); 
		r->data=x;
		r->next=NULL; r->pri=NULL;
		s->next=r; r->pri=s;
		s=r;
		cin>>x;
	}
	return l;
}
DLinkList DList_head(DLinkList &l){
	int x;	cin>>x;
	l=(DLinkList)malloc(sizeof(DNode)); l->next=NULL; l->pri=NULL;
	DNode *r,*s;
	while(x!=999){
		s=(DLinkList)malloc(sizeof(DNode)); 
		s->data=x;
		s->next=l->next; s->pri=l;
		l->next=s;
		cin>>x;
	}
	return l;
}
typedef struct node{
	int data,next;
}node; 

int main(){
	DLinkList l=NULL;
	l=DList_tail(l);
	//DestroyDLinkList(l);
	printDNode(l);
	/*
	LinkList l=NULL;
	//l=List_tail(l);
	//cout<<len(l)<<endl;
	//int x=-1; cout<<Listdelete(l,4,x)<<endl;
	//DeleteNode(LocateElem(l,4));
	//insert(l,4,999);
	List_head(l);
	print(l);
	//cout<<(LocateElem(l,4))->data<<endl;
	*/
    return 0;
}

