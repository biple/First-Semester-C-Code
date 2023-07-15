/*a program to find the sum of following series: 11 22 33... upto n terms*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n, sum, i;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
    	sum+=i*11;
	}
		printf("The sum of %d terms of the series is: %d",n,sum);
		getch();	
}


