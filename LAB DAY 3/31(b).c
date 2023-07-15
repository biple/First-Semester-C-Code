/*a program to find the sum of the following series:
1^1+2^2...upto n terms*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i, j, sum=0, p;
	printf("Enter n: ");
	scanf("%d", &n);
		for (i=1; i<=n; i++)
		{
    		p=1;
    		for(j=1;j<=i;j++)
    			p*=i;
    		sum+=p;
		}
		printf("Sum of the %d numbers of the series is: %d",n,sum);
		getch();
}

