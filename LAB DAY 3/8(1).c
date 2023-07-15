/*Write a program to find the sum of square of first ‘n’ natural numbers (using all loops)*/
#include<stdio.h>
#include<conio.h>

void main()
{
	//while loop
	int n, sum=0, i=0;
	 printf("Input the number of terms: ");
	 scanf("%d", &n);
	 
	 while(i<=n)
	 {
	 	sum+= (i*i);
	 	i++;
	 }
	 
	 printf("Sum of squares of first %d natural numbers = %d",n,sum);
	 getch();
}
