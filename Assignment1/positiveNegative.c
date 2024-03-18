#include <stdio.h>

int main()
{
	int n1;
	
	printf("Please enter the number: \n");
	scanf("%d",&n1);
	
	if(n1>=0)
	{
		printf("%d is Positive",n1);
	}else
	{
		printf("%d is negative",n1);
	}
}
