#include <stdio.h>

int main()
{
	char ch;
	
	printf("Please enter character:\n");
	scanf("%c",&ch);
	
	if(ch=='A' || ch=='E'|| ch=='I' || ch=='O'|| ch=='U' || ch=='a' || ch=='e'|| ch=='i' || ch=='o'|| ch=='u')
	{
		printf("This is a Vowel.");
	}
	else
	{
		printf("This is a consonant.");
	}
}
