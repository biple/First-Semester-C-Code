/*program to read a character and check whether it is letter, digits or others characters*/
#include<stdio.h>
#include<conio.h>

void main ()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);
	
	//Alphabet check
	if((ch>='a' && ch<='z') || (ch >= 'A' && ch<='Z'))
	{
		printf("'%c' is an alphabet", ch);
	}
	else if(ch>=0 || ch<=9)
	{
		printf("'%c' is a digit", ch);
	}
	else
	{
		printf("'%c' is a special character", ch);
	}
	getch();
}
