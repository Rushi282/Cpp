#include <stdio.h>

int main()
{
	float cp,sp;
	
	printf("Please enter cost price and selling price :\n");
	scanf("%f%f",&cp,&sp);
	
	if(cp<sp)
	{
		float profit = sp-cp;
	 	printf("You can booked your profit amount : %f",profit);
	}
	else
	{
		float loss = sp-cp;
	 	printf("You can booked your profit amount : %f",loss);
	}
}
