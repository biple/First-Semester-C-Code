/*A program to check whether entered number is odd or even using ternary operator*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	(n%2==0) ?
		printf("\n Even"): //true
		printf("\n Odd"); //false
	getch();
}
