/*program to check whether a number is negative or positive*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num>0)
	{
		printf("%d is positive.", num);
	}
	else if (num<0)
	{
		printf("%d is negative.", num);
	}
	else
	{
		printf("%d zero.", num);
	}
	getch();
}
