#include<bits/stdc++.h>
#define ll long long
#define N 10000000
using namespace std;
const int INF=0x3f3f3f3f;
ll dp[5];
vector<int> v;
int k=1,num[N+20];
int su[N+20];
int main(){
	if(getchar()=='A'){
		string s;
		for(int i=1;i<=2023;i++){
			s+=to_string(i);
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='2'){
				dp[3]+=dp[2];
				dp[1]++;
			}else if(s[i]=='0'){
				dp[2]+=dp[1];
			}else if(s[i]=='3'){
				dp[4]+=dp[3];
			}
		}
		cout<<dp[4];
	}else{
		//v.push_back(1);
		for(int i=2;i<=sqrt(N);i++){
			if(su[i]==0){
				for(int j=i*i;j<=N;j+=i){
					su[j]=1;
				}
			} 
		}
		for(int i=2;i<=N;i++){
			//if(su[i]!=0) v.push_back(i);
			if(su[i]==0) v.push_back(i);
		}
		/*
		for(int i=2;i<=N;i++){
			if(su[i]!=1){
				v.push_back(i);
			}
			for(int j=0;j<v.size()&&v[j]*i<N;j++){
				su[v[j]*i]=1;
				if(i%v[j]==0)break;
			}
		}*/
		ll cnt=0;
		for(int i=0;i<v.size()-1;i++){
			if(1ll*v[i]*v[i]*v[i]*v[i]>23333333333333) break;
			for(int j=i+1;j<v.size();j++){
				if(1ll*v[i]*v[i]*v[j]*v[j]<2333) continue;
				if(1ll*v[i]*v[i]*v[j]*v[j]>23333333333333)break;
				cnt++;
			}
		}
		cout<<cnt;
	}
    return 0;
}

