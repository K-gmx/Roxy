#include<bits/stdc++.h>
#define int long long
#define N 500000+10
using namespace std;
const int INF=0x3f3f3f3f;
int a[N],n,ans=0,b[N];
void merge_sort(int l,int r){
	if(l==r) return ;
	int mid=(l+r)/2;
	int i=l;
	int j=mid+1;
	int k=l;
	merge_sort(l,mid);
	merge_sort(mid+1,r);
	while(i<=mid&&j<=r){
		if(a[i]<=a[j]) b[k++]=a[i++];
		else{
			b[k++]=a[j++];
			ans+=mid-i+1;
		}
	}
	while(i<=mid) b[k++]=a[i++];
	while(j<=r) b[k++]=a[j++];
	for(int o=l;o<=r;o++) a[o]=b[o];
}
signed main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
    merge_sort(1,n);
    printf("%lld",ans);
    return 0;
}
