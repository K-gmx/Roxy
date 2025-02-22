#include<bits/stdc++.h>
#define ll long long
#define N 100005
using namespace std;
const int INF=0x3f3f3f3f;
int x,y,z,cnt=0;
map<string ,string> mp;
string a[N][3];
string b[N][3];
string findx(string s){
	if(mp[s]!=s) {
		mp[s]=findx(mp[s]);
	}
	return mp[s];
}
int main(){
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>a[i][1]>>a[i][2];
	}
	cin>>y;
	for(int i=1;i<=y;i++){
		cin>>b[i][1]>>b[i][2];
	}
	cin>>z;
	for(int i=1;i<=z;i++){
		for(int k=1;k<=3;k++){
			string s;
			cin>>s;
			mp[s]=i;
		}
	}
	for(int i=1;i<=x;i++){
		if(mp[a[i][1]]!=mp[a[i][2]]) cnt++;
	}
	for(int i=1;i<=y;i++){
		if(mp[b[i][1]]!=mp[b[i][2]]) cnt++;
		
	}
	cout<<cnt;
    return 0;
}
/*for(int i=1;i<=z;i++){
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		//if(mp.count(s1)==0) 	
		mp[s1]=s1;
		//if(mp.count(s2)==0) 	
		mp[s2]=s2;
		//if(mp.count(s3)==0)		
		mp[s3]=s3;
		mp[findx(s1)]=findx(s2);
		mp[findx(s1)]=findx(s3);
	}
	for(int i=1;i<=x;i++){/*
		if(mp[a[i][1]]!=mp[a[i][2]]) {
			cnt++;//cout<<mp[a[i][1]]<<endl;
		}
	
	??
		if(findx(a[i][1])!=findx(a[i][2])) {
			cnt++;//cout<<mp[a[i][1]]<<endl;
		}
	}
	for(int i=1;i<=y;i++){/*
		if(mp[b[i][1]]!=mp[b[i][2]]) {
			cnt++;//cout<<mp[b[i][1]]<<endl;
		}
		??
		if(findx(b[i][1])==findx(b[i][2])) {
			cnt++;//cout<<mp[b[i][1]]<<endl;
		}
	}*/
