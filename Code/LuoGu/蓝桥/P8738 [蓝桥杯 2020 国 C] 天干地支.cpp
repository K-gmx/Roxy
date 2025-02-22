#include<bits/stdc++.h>
#define ll long long
#define N 1000000
using namespace std;
const int INF=0x3f3f3f3f;
string a[10] = { "jia","yi","bing","ding","wu","ji","geng","xin","ren","gui" };
string b[12] = { "zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai" };
int main(){
	int x;
	cin>>x;
	cout<<a[(x%10+6)%10]+b[(x%12+8)%12];
    return 0;
}

