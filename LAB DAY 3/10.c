/*a program to display the first 10 terms of series 1, 5, 9, ...*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,term;
	printf("The 10 terms of the series are: ");
	for(i=1;i<=10;i++)
	{
		printf("%d ",term);
		term+=4;
	}
	getch();
}
