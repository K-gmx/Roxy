#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int dx[] = {-1, 0, 1,  0}; 
int dy[] = { 0, 1, 0, -1};
map<string,int> mp;
queue<string> q;
string s1,s2;

int bfs(){
	q.push(s1);
	mp[s1]=0;
	while(!q.empty()){
		string ss=q.front();
		q.pop();
		int step=mp[ss];
		if(ss==s2) return step;
		int k=ss.find('.');
		int x=k/3;
		int y=k%3;
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx<0||ny<0||nx>2||ny>2) continue;
			string tmp=ss;
			swap(tmp[k],tmp[nx*3+ny]);
			if(mp[tmp]==0){
				mp[tmp]=step+1;
				q.push(tmp);
			}
		}
	}
	return -1;
}
int main(){
	cin>>s1>>s2;
	cout<<bfs();
    return 0;
}

