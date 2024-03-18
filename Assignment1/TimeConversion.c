#include <stdio.h>

int main()
{
	int sec,h,m;
	printf("Please enter the seconds :\n");
	scanf("%d",&sec);
	
	h = sec/3600;
	sec = sec-(h*3600);
	m = sec/60;
	sec = sec-(m*60);
	printf("h:%d\tm:%d\ts:%d",h,m,sec);
}
