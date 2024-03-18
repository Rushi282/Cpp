#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	
	printf("Value of a and b before swapping %d & %d \n",a,b);
	
	int temp = a;
	a = b;
	b = temp;
	
	printf("Value of a and b after swapping %d & %d",a,b);
}
