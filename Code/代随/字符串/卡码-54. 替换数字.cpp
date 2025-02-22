#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len1=s.size(),count=0;
	for(int i=0;i<=len1-1;i++)
	{
		if(s[i]<='9'&&s[i]>='0')count++;
	} 
	s.resize(len1+count*5);
	int len2=s.size();
	for(int i=len1-1,j=len2-1;i>=0;i--,j--)
	{
		if(s[i]<='9'&&s[i]>='0')
		{
			s[j]='r';
			s[j-1]='e';
			s[j-2]='b';
			s[j-3]='m';
			s[j-4]='u';
			s[j-5]='n';
			j-=5;
		}
		else
		{
			s[j]=s[i];
		}
	}
	cout<<s;
	return 0;
}

