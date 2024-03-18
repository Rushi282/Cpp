#include <stdio.h>

int main()
{
	char ch;
	
	printf("Please enter character:\n");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='z')
	{
		printf("This is a alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("This is a digit");
	}
	else
	{
		printf("This is a special character");
	}
}
