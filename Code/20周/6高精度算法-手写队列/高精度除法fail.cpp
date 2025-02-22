#include <stdio.h>
#include <string.h>

int nc[100000]={0};


void add(char *a,char *b,char *c,int *flag)
{
	int na[100000]={0},nb[100000]={0};
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
		*flag=0;
		return; 
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
	while(na[maxl--]==0);
	maxl+=2;//9//10*/
	c[10005]={0};
	for(int i=0;i<=maxl-1;i++)//0-8//0-9
	{
		c[i]=na[maxl-1-i]+'0';
		//printf("%c",na[maxl-1-i]+'0');
	}
	c[maxl]='\0'; 
	//printf("\n");
	//maxl=strlen(c);
	//c[maxl]='\0'; 
	//c[maxl]='\0'; 
}

void change(char *a,char *c){
	int lena=strlen(a),lenc=strlen(c);
	int maxl=lena>lenc?lena:lenc;
	for(int i=0;i<=maxl-1;i++)
	{
		char ch=a[i];
		a[i]=c[i];
		c[i]=ch;
	}
}

int main()
{
	char a[10005],b[10005],c[10005]={0};
	int flag=1,count=0,k=1;
	scanf("%s %s",&a,&b);
	add(a,b,c,&flag);
	while(flag!=0)
	{
		
		count++;
		if(count%10==0)
		{
			count=1;
			k++;
		}
		nc[k]=count;
		change(a,c);
		add(a,b,c,&flag);
	}
	for(int i=k;i>=1;i--)
	{
		printf("%d",nc[i]);
	}
	printf("\n%s\n",a);
	
	return 0;
} 
