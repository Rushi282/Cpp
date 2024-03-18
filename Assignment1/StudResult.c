#include <stdio.h>

int main()
{
	int p,c,ca,total;
	float per;
	
	printf("Please enter the marks of physics,chemistry,computer resp: \n");
	scanf("%d%d%d",&p,&c,&ca);
	
	total = p+c+ca;
	per = (float)total/300*100;
	
	if(per>=60)
	{
		printf("Your Percentage is %f and passed with First Class",per);
	}
	else if(per>=50 && per<60)
	{
		printf("Your Percentage is %f and passed with Second Class",per);
	}
	else if(per>=40 && per<50)
	{
		printf("Your Percentage is %f and pass",per);
	}
	else
	{
		printf("Your Percentage is %f Better luck next time..",per);
	}
	return 0;
}
