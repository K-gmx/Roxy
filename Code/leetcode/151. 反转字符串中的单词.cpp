#include<bits/stdc++.h>
#include<string>
using namespace std;
void re(string *s, int start, int end){ 
        for (int i=start,j=end;i<j;i++,j--){
            swap(s[i],s[j]);
        }
	}
int main()
{
	string s;
	getline(cin,s);
	int len=s.size(),slow=0;
	for(int i=0;i<=len-1;i++)
	{
		if(s[i]!=' ')
		{
			if(slow!=0)s[slow++]=' ';
			while(i<=len-1&&s[i]!=' ')
			{
				s[slow++]=s[i++];
			}
		}
	}
	s.resize(slow);len=slow;
	re(&s,0,s.size()-1);
	/*int star=0;
	for(int i=0;i<=len;++i)
	{
		if(s[i]=' '||i==len)
		{
			re(&s,star,i-1);
			star=i+1;
		}
	}*/
	cout<<s; 
	return 0;
}

