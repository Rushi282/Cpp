#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three volue");
	scanf("%d%d%d",&a,&b,&c);
	if(b>c)
	{ 
	printf("b is grater among of three");
	} else if(a>b && a>c)
	{ 
	printf("a is grater than among of three");
	}else
	{
		printf("c is grater than among of three");
	}
	
}

