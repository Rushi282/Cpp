#include <stdio.h>

int main()
{
	float unit,u1,u2,u3,u4,rate,amt,finalamt;
	
	printf("Please enter the usage in unit:\n");
	scanf("%f",&unit);
	
	if(unit<=199)
	{
		amt = unit*1.2;
	}
	else if(unit<=400)
	{
		u1 = (unit-199)*1.5;
		amt = u1+199*1.2;
	}
	else if(unit<=600)
	{
		u1 = (unit-400)*1.8;
		u2 = 201*1.5;
		u3 = 199*1.2;
		amt = u1+u2+u3;
	}
	else
	{
		u1 = (unit-600)*2;
		u2 = 200*1.8;
		u3 = 201*1.5;
		u4 = 199*1.2;
		amt = u1+u2+u3+u4;
	}
	
	//amt = unit*rate;
	printf("Amount Charges : %f\n",amt);
	
	if(amt>=400)
	{
		float suramt = amt*0.15;
		printf("Surcharge Amount %f\n",suramt);
		finalamt = suramt + amt;
		printf("Net Amount Paid By the Customer : %f\n",finalamt);
	}
	if(finalamt<=100)
	{
		float minamt = 100;
		printf("Net Amount Paid By the Customer : %f",minamt);
	}
	
	return 0;
}
