#include<bits/stdc++.h>
#define ll long long
#define N 200000+10
using namespace std;
const int INF=0x3f3f3f3f;
int n,R,Q; 
struct node{
	int s;
	int v;
	int num;
}a[N],b[N];
node win[N],lose[N];
int cmp(node x,node y){
	if(x.s==y.s) return x.num<y.num;
	return x.s>y.s;
}
void merge(){
	int i=1,j=1,k=1;
	while(i<=n/2&&j<=n/2){
		if(cmp(win[i],lose[j])){
			b[k++]=win[i++];
		}else{
			b[k++]=lose[j++];
		}
	}
	while(j<=n/2) b[k++]=lose[j++];
	while(i<=n/2) b[k++]=win[i++];
	for(int o=1;o<=n;o++) a[o]=b[o];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>R>>Q;
    n*=2;
    for(int i=1;i<=n;i++) {
    	cin>>a[i].s;
    	a[i].num=i;
	}
	for(int i=1;i<=n;i++) {
    	cin>>a[i].v;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=R;i++){
		int k1=1,k2=1;
		for(int j=1;j<=n-1;j+=2){
			if(a[j].v>a[j+1].v){
				a[j].s++;
				win[k1++]=a[j];
				lose[k2++]=a[j+1];
			}else{
				a[j+1].s++;
				win[k1++]=a[j+1];
				lose[k2++]=a[j];
			}
		}
		merge();
	}
	cout<<a[Q].num;
    return 0;
}

