/*Write a program using function to print line of 50 asterisk*/
#include<stdio.h>
#include<conio.h>

void display();
void main()
{
	display();
	getch();
}

void display()
{
	int i,j,k;
	for(i=0;i<50;i++)
	{
		printf("*");
	}
}
