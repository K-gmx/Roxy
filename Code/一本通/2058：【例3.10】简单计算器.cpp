#include <stdio.h>
#include <math.h>

int main()
{
	char ch;
	double a,b;
	scanf("%lf %lf %c",&a,&b,&ch);
	if(b==0&&ch=='/')
	{
		printf("Divided by zero!");
	}
	else{
		switch(ch)
	{
		case'+':
			printf("%g",a+b);
			break;
		case'-':
			printf("%g",a-b);
			break;
		case'*':
			printf("%g",a*b);
			break;
		case'/':
			printf("%g",a/b);
			break;
		default:
			printf("Invalid operator!");
	}
	}
	
	return 0;
}
