/*program to demonstrate  the  use  of  arithmetic  operation  on  integer */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b, sum, sub, multi, r;
	float div;
	
	printf("Enter two integers: \n");
	scanf("%d %d", &a, &b);
	
	sum = a + b;
	sub = a - b;
	multi = a*b;
	div = a/(float)b;     			/*or (float)a/b*/
	r = a%b;
	
	printf("Sum of two integers = %d", sum);
	printf("\nDifference of two integers = %d", sub);
	printf("\nMultiplication of two integers = %d", multi);
	printf("\nDivision of two integers = %f", div);
	printf("\nRemainder = %d", r);
	getch();
	
	
 } 
