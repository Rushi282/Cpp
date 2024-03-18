#include <stdio.h>

int main()
{
	float h;
	
	printf("Please enter the height in cm :\n");
	scanf("%f",&h);
	
	if(h>=170)
	{
		//printf("Tall");
		printf("\n with height of %f you are Tall",h);
	}
	else if(h<=169 && h>=150)
	{
		//printf("Average");
		printf("\n with height of %f you are Average",h);
	}
	else
	{
		//printf("Short");
		printf("\n with height of %f you are Short",h);
	}
	return 0;
}
