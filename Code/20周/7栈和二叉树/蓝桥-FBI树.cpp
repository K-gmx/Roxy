#include <bits/stdc++.h>
using namespace std;
char s[1<<11]={0},temp; 
int n;
void print(int i){
	if(i>=(1<<(n+1))) 
  {
    return;
  }
	print(2*i);
	print(2*i+1);
	cout<<s[i];	
}
int main(){
	cin>>n;
   long long i;
	for(i=(1<<n);i<(1<<n+1);i++)
	{
		cin>>temp;
		s[i]=(temp=='1'?'I':'B');
	}
	for(i=(1<<n)-1;i>=1;i--)
	{
		s[i]=(s[2*i]==s[2*i+1]?s[2*i]:'F');
	}
	print(1);
	return 0;  

}

