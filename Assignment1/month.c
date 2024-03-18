#include <stdio.h>

int main()
{
	int month;
	
	printf("Please enter digit:\n");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			{
				printf("Month:January \t No. of days:31");
			}
			break;
		case 2:
			{
				printf("Month:february \t No. of days:28 or 29");
			}
			break;
		case 3:
			{
				printf("Month:March \t No. of days:31");
			}
			break;
		case 4: case 6: case 9:
			{
				printf("Month:April \t No. of days:30");
			}
			break;
		case 5:
			{
				printf("Month:May \t No. of days:31");
			}
			break;
		case 6 :
			{
				printf("Month:June \t No. of days:30");
			}
			break;
		case 7 :
			{
				printf("Month:July \t No. of days:31");
			}
			break;
		case 8 :
			{
				printf("Month:August \t No. of days:31");
			}
			break;
		case 9 :
			{
				printf("Month:September \t No. of days:30");
			}
			break;
		case 10 :
			{
				printf("Month:october \t No. of days:31");
			}
			break;
		case 11 :
			{
				printf("Month:November \t No. of days:30");
			}
			break;
		case 12 :
			{
				printf("Month:December \t No. of days:31");
			}
			break;
		default:
			{
				printf("Invalid digit");
			}
	}
}
