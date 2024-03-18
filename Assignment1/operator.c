#include <stdio.h>

int main()
{
	int num1,num2,res;
	char ch;
	
	printf("Please enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	
	printf("Please enter operator(+|-|*|/):\n");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
			{
				res = num1+num2;
				printf("Addition of %d and %d is %d",num1,num2,res);
			}
			break;
		case '-':
			{
				res = num1-num2;
				printf("Substraction of %d and %d is %d",num1,num2,res);
			}
			break;
		case '*':
			{
				res = num1*num2;
				printf("Multiplication of %d and %d is %d",num1,num2,res);
			}
			break;
		case '/':
			{
				res = num1/num2;
				printf("Division of %d and %d is %d",num1,num2,res);
			}
			break;
		default:
			{
				printf("Invalid Input");
			}
	}
}
