#include <stdio.h>
#include <string.h>

int na[100000]={0},nb[100000]={0};
int nc[100000]={0};

void addx(char *a,char *b,char *c)
{
	int lena=strlen(a),lenb=strlen(b);
	int maxl=lena+lenb;
	
	for(int i=1;i<=lena;i++)
	{
		na[i]=a[lena-i]-'0';
	}
	for(int i=1;i<=lenb;i++)
	{
		nb[i]=b[lenb-i]-'0';
	}
	int k1=lena;
	while(na[k1--]==0&&k1>=1);k1++;lena=k1;
	int k2=lenb;
	while(nb[k2--]==0&&k2>=1);k2++;lenb=k2;
	if(na[lena]==0||nb[lenb]==0)
	{
		c[0]='0';
		return;
	}
	for(int i=1;i<=lena;i++)
	{
		for(int j=1;j<=lenb;j++)
		{
			nc[i+j-1]+=na[i]*nb[j];
		}
	}
	for(int i=1;i<=lena+lenb;i++)
	{
		nc[i+1]+=nc[i]/10;
		nc[i]%=10;
	}
	if(nc[lena+lenb]!=0)maxl=lena+lenb+1;
	int k=maxl-1;
	while(nc[k--]==0);k++;
	for(int i=0;i<=k-1;i++)
	{
		c[i]=nc[k-i]+'0';
	}
}

int main()
{
	char a[10005],b[10005],c[10005];
	int flag=1;
	scanf("%s %s",&a,&b);
	addx(a,b,c);
	printf("%s",c);
	return 0;
} 
