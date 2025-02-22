#include<bits/stdc++.h>
#define ll long long
#define N 200
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	string s1,s2,s3;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s3>>s2>>s1;
		int flag=0;
		for(int j=0;j<=3;j++){
			int sum[N]={0};
			//memset(sum,0,sizeof(sum));
			sum[s1[j]]++;
			for(int k=j;k<=7;k+=4){
				sum[s2[k]]++;
			}
			for(int k=j;k<=11;k+=4){
				sum[s3[k]]++;
			}
			if(sum['G']==3&&sum['R']==2&&sum['Y']==1){
				flag++;
			}else{
				cout<<"NO"<<endl;
				//cout<<sum['G']<<endl;
				//cout<<sum['R']<<endl;
				//cout<<sum['Y']<<endl;
				break;
			}
		}
		if(flag==4){
			cout<<"YES"<<endl;
		}
	}
    return 0;
}

