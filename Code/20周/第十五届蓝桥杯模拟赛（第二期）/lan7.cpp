#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
#define N 10005

using namespace std;

int main()
{
	char a;
	char ch;
	while(scanf("%c",&a)!=-1)
	{
		if(a=='\n')break;
		if(a=='a')ch=a;
		if(a=='e')ch=a;
		if(a=='i')ch=a;
		if(a=='o')ch=a;
		if(a=='u')ch=a;
	}
	printf("%c",ch);
	return 0;
}

/*
194910
*/

