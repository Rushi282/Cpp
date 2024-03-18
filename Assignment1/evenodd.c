#include <stdio.h>

int main()
{
	int n1;
	
	printf("Please enter a number: \n");
	scanf("%d",&n1);
	
	if(n1%2==0)
	{
		printf("Given number is even.");
	}else
	{
		printf("Given number is odd.");
	}
	
	return 0;
}
