/*a program to generate first 10 natural numbers using while loop*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 1;
	printf("First 10 natural numbers are:\n");
	while (i <= 10)
	{
		printf("%d\n",i);
		i++;
	}
	getch();
}
