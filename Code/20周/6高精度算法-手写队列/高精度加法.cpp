#include <stdio.h>
#include <string.h>

int na[100000]={0},nb[100000]={0};

void add(char *a,char *b,char *c)
{
	int lena=strlen(a),lenb=strlen(b);
	for(int i=0;i<=lena-1;i++)
	{
		na[i]=a[lena-1-i]-'0';
	}
	for(int i=0;i<=lenb-1;i++)
	{
		nb[i]=b[lenb-1-i]-'0';
	}
	int maxl=lena>lenb?lena:lenb;
	if(maxl==1&&nb[0]==0&&na[0]==0)
	{
		c[0]='0';return;
	}
	for(int i=0;i<=maxl-1;i++)
	{
		na[i]=na[i]+nb[i];
		na[i+1]+=na[i]/10;
		na[i]=na[i]%10;
	}
	if(na[maxl]>0)maxl++;
	int k=maxl;
	while(na[--k]==0);k++;
	for(int i=0;i<=k-1;i++)
	{
		c[i]=na[k-1-i]+'0';
	}
}

int main()
{
	char a[10005],b[10005],c[10005];
	scanf("%s %s",&a,&b); 
	add(a,b,c);
	printf("%s",c);
	return 0;
} 
