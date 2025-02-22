#include<bits/stdc++.h>
#define ll long long
#define N 200000+10
using namespace std;
const int INF=0x3f3f3f3f;
int s[N];
void inti_set(int n){
	for(int i=1;i<=N;i++) s[i]=i;
}
int find_set(int x){
	if(x!=s[x]) s[x]=find_set(s[x]);
	return s[x];
}
void merge_set(int x,int y){
	x=find_set(x);
	y=find_set(y);
	if(x!=y){
		s[x]=s[y];
	}
}
int main(){
	int n,m;
	inti_set(n);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int op;
		cin>>op;
		int x,y;
		cin>>x>>y;
		if(op==1){
			merge_set(x,y);
		}
		if(op==2){
			if(find_set(x)==find_set(y)){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	}
    return 0;
}

