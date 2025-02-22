#include <stdio.h>
#include <math.h>

int main()
{
	char ch[201]={0};
	int a=0;
	while(scanf("%c",&ch[a])!=-1){/*if(ch[a]=='.'){break;}*/a++;}
	for(int i=0;;)
	{
		if(ch[i]!=' ')
		{
			printf("%c",ch[i]);
			i++;
		}
		else
		{
			printf("%c",ch[i]);
			int j=i;
			while(ch[j]==' ') 
			{
				j++;
			}
			i=j;
		}
		if(i>=a)
		{
			break;
		}
	}
	//printf("%d",i);
	return 0;
}
