#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int len=s.size();
	for(int star=0,end=len-1;star<end;star++,end--)
	{
		char t=s[star];
		s[star]=s[end];
		s[end]=t;
	} 
	for(int star=0,end=n-1;star<end;star++,end--)
	{
		char t=s[star];
		s[star]=s[end];
		s[end]=t;
	} 
	for(int star=n,end=len-1;star<end;star++,end--)
	{
		char t=s[star];
		s[star]=s[end];
		s[end]=t;
	} 
	cout<<s;
	return 0;
}

