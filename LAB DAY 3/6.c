/*a program to generate first ‘n’even terms and find their sum also*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	
	printf("Input number of terms: ");
	scanf("%d",&n);
	printf("\nThe even numbers are: ");
	for(i=1;i<=n;i++)
	{
		printf("%d ", 2*i);
		sum+=2*i;
	}
	printf("\nThe sum of Natural Numbers upto %d terms : %d \n",n,sum);
}
