/*program to check whether a number is odd or even*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d", &no);
	
	if(no%2 == 0)
	{
		printf("%d is even.", no);
	}
	else
	{
		printf("%d is odd.", no);
	}
	getch();
}
