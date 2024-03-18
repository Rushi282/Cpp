#include <stdio.h>

int main()
{
	float f,c;
	
	printf("Please enter the tempreture in farhnite : \n");
	scanf("%f",&f);
	
	c = (float)5/9 *(f-32);
	
	printf("Tempreture in celcious %f",c);
}
