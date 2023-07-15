/*a program to generate first 10 natural numbers using do-while loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	printf("First 10 natural numbers are: \n");
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=10);
	getch();
}
