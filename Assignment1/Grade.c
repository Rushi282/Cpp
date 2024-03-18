#include <stdio.h>

int main()
{
	char ch;
	
	printf("Please enter the grade:\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'E':
			{
				printf("Excellent");
			}
			break;
		case 'V':
			{
				printf("Very Good");
			}
			break;
		case 'G':
			{
				printf("Good");
			}
			break;
		case 'A':
			{
				printf("Average");
			}
			break;
		case 'F':
			{
				printf("Fail");
			}
			break;
		default:
			{
				printf("Invalid grade");
			}
	}
}
