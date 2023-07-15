/*a program to generate first ‘n’odd terms*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("First %d odd numbers are:\n",n);
	for(j=1,i=1;j<=n;i=i+2,j++)
	{
		printf("%d ",i);
	}
	getch();
}
