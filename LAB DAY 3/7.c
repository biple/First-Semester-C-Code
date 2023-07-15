/*a program to find sum of first ‘n’ natural numbers*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n, count, sum =0;
	printf("Input the number of terms: ");
	scanf("%d",&n);
	count=1;
	while(count <= n)
	{
		sum = sum + count;
		count++;
	}
	printf("Sum of the first %d natural numbers is %d",n,sum);
	getch();
}
