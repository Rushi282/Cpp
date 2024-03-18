#include <stdio.h>

int main()
{
	float a1,a2,a3;
	
	printf("Please enter the three angle of traingle:\n");
	scanf("%f%f%f",&a1,&a2,&a3);
	
	float total = a1+a2+a3;
	
	if(total==180)
	{
		printf("This is valid Traingle");
	}else
	{
		printf("this is not valid Traingle");
	}
}
