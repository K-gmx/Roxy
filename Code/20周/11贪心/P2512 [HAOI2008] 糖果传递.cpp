
#include<bits/stdc++.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define inline il

typedef long long ll;
typedef long double ld;

const int inf = 0x7fffffff;
const int N = 1e6+1;

ll n;
ll a[N],c[N];
ll ave,ans,mid;

using namespace std;

int main()
{
	scanf("%lld",&n);
	for(int i=1;i<=n;++i)
		scanf("%lld",&a[i]),ave+=a[i];
	ave/=n;
	for(int i=1;i<=n;++i)
		c[i]=c[i-1]-(-ave+a[i-1]);
	sort(c+1,c+n+1);
	mid=c[n/2+1];
	for(int i=1;i<=n;++i)
		ans+=abs(mid-c[i]);
	printf("%lld",ans);
	return 0;
}
