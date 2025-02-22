#include<bits/stdc++.h>
#define ll long long
#define N 500+10
using namespace std;
const int INF=0x3f3f3f3f;
int f[N][N],n,m;
vector<int> v;
void floyd(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(j!=k&&j!=i&&k!=i){
					f[j][k]=min(f[j][k],f[j][i]+f[i][k]);
				}
			}
		}
	}
}
int main(){
	memset(f,INF,sizeof f);
	scanf("%d %d\n",&m,&n);
	while(m--){
		v.clear();
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			int num=0;
			while(s[i]<='9'&&s[i]>='0'){
				num=num*10+s[i]-'0';
				i++;
			}
			v.push_back(num);
		}
		for(int i=0;i<v.size()-1;i++){
			for(int j=i+1;j<v.size();j++){
				f[v[i]][v[j]]=1;
			}
		}
	}
	floyd();
	/*
    for(int i=1;i<=7;i++){
    	for(int j=1;j<=7;j++){
    		printf("%11d ",f[i][j]);
		}
		cout<<endl;
	}*/
	if(f[1][n]==INF){
		cout<<"NO";
	}else{
		cout<<f[1][n]-1;
	}
    return 0;
}

