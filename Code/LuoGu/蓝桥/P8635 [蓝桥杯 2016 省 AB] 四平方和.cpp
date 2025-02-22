#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int n;
	cin>>n;
	for(int q=0;q<=sqrt(n);q++){
		for(int w=0;w<=sqrt(n);w++){
			if(q*q+w*w>n)break;
			for(int e=0;e<=sqrt(n);e++){
				int r=q*q+w*w+e*e;
				if(r>n)break;
				else{
					int d=sqrt(n-r);
					if(n-r==d*d){
						printf("%d %d %d %d",q,w,e,d);
						return 0;
					}
				}
				/*for(int r=0;r<=sqrt(n);r++){
					if(q*q+w*w+e*e+r*r>n)break;
					if(q*q+w*w+e*e+r*r==n) {
						printf("%d %d %d %d",q,w,e,r);
						return 0;
					}
				}*/
			}
		}
	}
    return 0;
}

