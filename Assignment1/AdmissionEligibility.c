#include <stdio.h>

int main()
{
	int maths,phys,chem,total,total1;
	
	printf("Please enter the marks of maths,phys,chem resp. :\n");
	scanf("%d%d%d",&maths,&phys,&chem);
	
	total = maths+phys+chem;
	total1 = maths+phys;
	
	if((maths>=65 && phys>=55 && chem>=50 && total>=190) || (total1>=140))
	{
		printf("The candidate is eligible for admission.");
	}
	else
	{
		printf("The candidate is not eligible for admission.");
	}
	
	return 0;
}
