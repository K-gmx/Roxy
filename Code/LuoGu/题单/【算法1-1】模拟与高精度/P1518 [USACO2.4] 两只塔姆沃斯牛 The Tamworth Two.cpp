#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
char m[15][15];
int xx[]={0,-1,0,1,0};
int yy[]={0,0,1,0,-1};
ll cnt=0;
struct node{
	int x,y,w;
}c,f;
bool move(){
	if(m[c.x+xx[c.w]][c.y+yy[c.w]]=='*'){
		c.w++;
		if(c.w==5) c.w=1;
	}else{
		c.x=c.x+xx[c.w];
		c.y=c.y+yy[c.w];
	}
	if(m[f.x+xx[f.w]][f.y+yy[f.w]]=='*'){
		f.w++;
		if(f.w==5) f.w=1;
	}else{
		f.x=f.x+xx[f.w];
		f.y=f.y+yy[f.w];
	}
	cnt++;
	if(c.x==f.x&&c.y==f.y) return true;
	return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    for(int i=1;i<=10;i++){
    	for(int j=1;j<=10;j++){
    		char ch;
	    	cin>>ch;
	    	if(ch=='C'){
	    		c.x=i;
	    		c.y=j;
	    		ch='.';
	    		c.w=1;
			}
			if(ch=='F'){
	    		f.x=i;
	    		f.y=j;
	    		ch='.';
	    		f.w=1;
			}
			m[i][j]=ch;
		}
	}
	for(int i=0;i<=11;i++){
		m[0][i]='*';
	}
	for(int i=0;i<=11;i++){
		m[11][i]='*';
	}
	for(int i=1;i<=10;i++){
		m[i][0]='*';
		m[i][11]='*';
	}
	/*for(int i=0;i<=11;i++){
		for(int j=0;j<=11;j++){
			cout<<m[i][j];
		}
		cout<<endl;
	}*/
	while(1){
		if(move()){
			cout<<cnt;
			return 0;
		}
		if(cnt>=10000)break;
	}
	cout<<0;
    return 0;
}

