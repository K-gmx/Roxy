#include<bits/stdc++.h>
#define ll long long
#define N 150+10
using namespace std;
const int INF = 0x3f3f3f3f;
int n, m, k, r;
int dp[N];
int t[N], z[N], f[N];
int s;
int cnt[N];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m >> k >> r;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> z[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> f[i];
	}
	for (int i = 1; i <= m; i++) {
		for (int j = r; j >= z[i]; j--) {
			dp[j] = max(dp[j], dp[j - z[i]] + f[i]);
		}
	}
	for (int i = 1; i <= r; i++) {
		if (dp[i] >= k) {
			s = r - i;
			break;
		}
	}
	memset(dp, 0, sizeof dp);
	for (int i = 1; i <= n; i++) {
		for (int j = s; j >= t[i]; j--) {
			dp[j] = max(dp[j], dp[j - t[i]] + 1);
		}
	}
	//cout<<s<<endl;
	cout << dp[s] << endl;
	//for(int i=1;i<=s;i++) cout<<dp[i]<<" ";
	return 0;
}
