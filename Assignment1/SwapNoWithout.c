#include <stdio.h>

int main()
{
	int a,b;
	printf("please enter the two number : \n");
	scanf("%d%d",&a,&b);
	printf("Value of a and b before swapping %d & %d \n",a,b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	printf("Value of a and b after swapping %d & %d",a,b);
	
	
}
