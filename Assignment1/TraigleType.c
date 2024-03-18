#include <stdio.h>

int main()
{
	float s1,s2,s3;
	
	printf("Please enter three sides of traingle :\n");
	scanf("%f%f%f",&s1,&s2,&s3);
	
	if(s1==s2 && s1==s3 && s2==s3)
	{
		printf("Equilateral Traingle");
	}
	else if(s1==s2 || s1==s3 || s2==s3)
	{
		printf("Isosceles Traingle");
	}
	else
	{
		printf("Scalene Traingle");
	}
	
}
