#include<bits/stdc++.h>
#define ll long long
#define N 100000+10
using namespace std;
const int INF = 0x3f3f3f3f;
ll x;
int main() {
	cin >> x;
	double l = 0.001, r = 10000.0;
	while (r - l >= 0.00001) {
		double mid = (r - l) / 2 + l;
		if (1ll * mid * mid * mid < x) {
			l = mid;
		}
		else {
			r = mid;
		}
	}
	//cout<<l<<" "<<r<<endl;
	printf("%.3f", l);
	return 0;
}