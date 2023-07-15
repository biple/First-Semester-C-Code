/*Write a program to find the sum of square of first ‘n’ natural numbers (using all loops)*/
#include<stdio.h>
#include<conio.h>

void main()
{
	//do-while loop
	int n, sum=0, i=0;
	printf("Input the number of terms: ");
	scanf("%d", &n);
	
	do
	{
		sum+= (i*i);
	 	i++;
	}while(i<=n);
	printf("Sum of squares of first %d natural numbers = %d",n,sum);
	getch();
}
