/*Write a program to display following triangle of asterisk of N lines using function*/
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
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
