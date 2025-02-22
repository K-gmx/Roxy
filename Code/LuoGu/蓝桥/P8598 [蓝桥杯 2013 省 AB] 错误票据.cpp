#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	vector<int> a;
	//vector<int>::iterator it = a.begin();
	int n,t,n1=INF,n2=INF;
	cin>>n>>t;
	a.push_back(t);
	n=1;
	while(cin>>t){
		n++;
		a.push_back(t);
	}
	sort(a.begin(),a.begin()+n);
	for(int i=1;i<n;i++){
		//cout<<a[i-1]<<endl;
		if(a[i]-a[i-1]>1) n1=a[i]-1;n
		if(a[i]==a[i-1] ) n2=a[i]; 
	}
	cout<<n1<<" ";
	cout<<n2<<endl;
    return 0;
}

