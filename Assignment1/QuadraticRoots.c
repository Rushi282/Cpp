#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,root,root1,term;
	
	printf("Please enter the values of a, b, c :\n");
	scanf("%f%f%f",&a,&b,&c);
	
	term = b*b-4*a*c;
//	root = ((-b+sqrt(pow(b,2)-(4*a*c)))/(2*a));
//	root1 = ((-b-sqrt(pow(b,2)-(4*a*c)))/(2*a));
	
	if(term>0)
	{
		root = ((-b+sqrt(pow(b,2)-(4*a*c)))/(2*a));
		root1 = ((-b-sqrt(pow(b,2)-(4*a*c)))/(2*a));
		printf("Roots are %f and %f and they are real",root,root1);
	}
	else 
	{
		printf("Roots are %f and %f and they are imaginary",root,root1);
	}
}
