/*Write a program to find the factorial of a given number*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,f;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial of the number %d is: %d",n,f);
	getch();
}
