#include <stdio.h>

int main()
{
	int n1,n2,n3;
	
	printf("Please enter the three numbers :\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("%d is Max",n1);
	}
	else if(n2>n1 &&n2>n3)
	{
		printf("%d is Max",n2);	
	}
	else if(n3>n1 && n3>n2)
	{
		printf("%d is Max",n3);	
	}
	else if(n1==n2 || n1==n3 || n2==n3)
	{
		printf("\n2 are equal");	
	}
	else
	{
		printf("%d%d%d \t All numbers are equal",n1,n2,n3);	
	}
	return 0;
}
