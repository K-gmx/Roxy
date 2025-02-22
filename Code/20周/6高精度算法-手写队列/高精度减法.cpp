#include <stdio.h>
#include <string.h>

int na[100000]={0},nb[100000]={0};

void add_(char *a,char *b,char *c,int *flag)
{
	int lena=strlen(a),lenb=strlen(b);
	int q=strcmp(a,b);
	if(q==0)
	{
		c[0]='0';
		c[1]='\0';
		return;
	}
	int maxl=lena>lenb?lena:lenb;
	if(lena<lenb||(lena==lenb&&q<0))
	{
		for(int i=0;i<=maxl-1;i++)
		{
			char t=a[i];
			a[i]=b[i];
			b[i]=t;
		}
		int t=lena;
		lena=lenb;
		lenb=t; 
		*flag=0;
	}
	for(int i=0;i<=lena-1;i++)
	{
		na[i]=a[lena-1-i]-'0';
	}
	for(int i=0;i<=lenb-1;i++)
	{
		nb[i]=b[lenb-1-i]-'0';
	}
	
	for(int i=0;i<=maxl-1;i++)
	{
		if(na[i]<nb[i])
		{
			na[i+1]--;
			na[i]+=10;
		}
		na[i]=na[i]-nb[i];
	}
	for(int i=maxl-1;i>=0;i--)
	{
		if(na[i]!=0)
		{
			maxl=i;
			break;
		}
	}
	maxl++;
	for(int i=0;i<=maxl-1;i++)
	{
		c[i]=na[maxl-1-i]+'0';
	}
}

int main()
{
	char a[10005],b[10005],c[10005];
	int flag=1;
	scanf("%s %s",&a,&b);
	add_(a,b,c,&flag);
	if(flag==0)printf("-");
	printf("%s",c);
	return 0;
} 
