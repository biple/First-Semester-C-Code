/*a program to find sum of cube of first 10 natural numbers*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n=10,sum=0;
	printf("The cube upto %d natural numbers are: ",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i*i);
		sum+=i*i*i;
	}
	printf("\nThe Sum of Cube Natural number upto %d terms= %d\n",n,sum);
	getch();	
}
