#include <stdio.h>

int main()
{
	int ft,in,cm;
	
	printf("Please enter height in cms:\n");
	scanf("%d",&cm);
	
	ft = (float)cm/30.48;
	cm = (float)cm-(ft*30.48);
	in = (float)cm/2.54;
	cm = (float)cm-(in*2.54);
	printf(" feet:%d\n inch:%d\n cms:%d\n",ft,in,cm);
}
