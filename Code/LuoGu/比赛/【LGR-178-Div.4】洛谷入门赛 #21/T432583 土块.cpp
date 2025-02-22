#include<bits/stdc++.h>
#define ll long long
#define N 1010
using namespace std;
const int INF=0x3f3f3f3f;
int a[N][10],b[N][10];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4];
		a[i][5]=a[i][1]+a[i][2]+a[i][3]+a[i][4];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i][1]>>b[i][2]>>b[i][3]>>b[i][4];
		b[i][5]=b[i][1]+b[i][2]+b[i][3]+b[i][4];
		if(b[i][1]==0&&b[i][2]==0&&b[i][3]==0&&b[i][4]==0) b[i][5]=10;
	}int ans=0;
		int k=0;
	for(int j=1;j<=n;j++){
		ans=0;
		k=0;
		for(int i=j;i<=n;i++){
			k++;//cout<<k<<endl;
			if(a[i][5]<b[k][5]||(b[k][1]==0&&b[k][2]==0&&b[k][3]==0&&b[k][4]==0)||b[k][5]==10)continue;
			if((a[i][1]==0&&b[k][1]==1)||(a[i][2]==0&&b[k][2]==1)||(a[i][3]==0&&b[k][3]==1)||(a[i][4]==0&&b[k][4]==1))continue;
			if(a[i][1]==b[k][1]&&a[i][2]==b[k][2]&&a[i][3]==b[k][3]&&a[i][4]==b[k][4]){
				ans+=6;
				//printf("%d %d %d %d -> %d %d %d %d 6\n",a[i][1],a[i][2],a[i][3],a[i][4],b[i][1],b[i][2],b[i][3],b[i][4]);
			} 
			else {
				ans+=3;
				//printf("%d %d %d %d -> %d %d %d %d 3\n",a[i][1],a[i][2],a[i][3],a[i][4],b[i][1],b[i][2],b[i][3],b[i][4]);
			}
		}
		for(int i=1;i<j;i++){
			k++;
			if(a[i][5]<b[k][5]||(b[k][1]==0&&b[k][2]==0&&b[k][3]==0&&b[k][4]==0)||b[k][5]==10)continue;
			if((a[i][1]==0&&b[k][1]==1)||(a[i][2]==0&&b[k][2]==1)||(a[i][3]==0&&b[k][3]==1)||(a[i][4]==0&&b[k][4]==1))continue;
			if(a[i][1]==b[k][1]&&a[i][2]==b[k][2]&&a[i][3]==b[k][3]&&a[i][4]==b[k][4]){
				ans+=6;
				//printf("%d %d %d %d -> %d %d %d %d 6\n",a[i][1],a[i][2],a[i][3],a[i][4],b[k][1],b[k][2],b[k][3],b[k][4]);
			} 
			else {
				ans+=3;
				//printf("%d %d %d %d -> %d %d %d %d 3\n",a[i][1],a[i][2],a[i][3],a[i][4],b[k][1],b[k][2],b[k][3],b[k][4]);
			}
			
		}
		cout<<ans<<" ";
	}
    return 0;
}
/*
3
1 1 1 1
1 1 1 1
1 1 1 1
0 1 1 0
0 0 0 0
1 1 1 1
*/
